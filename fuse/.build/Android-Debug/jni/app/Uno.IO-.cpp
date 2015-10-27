#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Array.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.GC.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.IO.CppXliStream.h>
#include <app/Uno.IO.CppXliStreamHandle.h>
#include <app/Uno.IO.Directory.h>
#include <app/Uno.IO.EndOfStreamException.h>
#include <app/Uno.IO.File.h>
#include <app/Uno.IO.FileMode.h>
#include <app/Uno.IO.FileSystemImpl.h>
#include <app/Uno.IO.IOException.h>
#include <app/Uno.IO.MemoryStream.h>
#include <app/Uno.IO.Path.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.IO.StreamReader.h>
#include <app/Uno.IO.StreamWriter.h>
#include <app/Uno.IO.TextReader.h>
#include <app/Uno.IO.TextWriter.h>
#include <app/Uno.IO.UserDirectory.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.BufferImpl.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.UInt.h>
#include <Uno/XliInterop.h>
#include <Xli/Array.h>
#include <Xli/Text.h>
#include <XliPlatform/Disk.h>

namespace app {
namespace Uno {
namespace IO {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BinaryReader__uType* BinaryReader__typeof()
{
    static ::uStaticStrong<BinaryReader__uType*> type;
    if (type != NULL) return type;

    type = (BinaryReader__uType*)::uAllocClassType(sizeof(BinaryReader__uType), "Uno.IO.BinaryReader", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))BinaryReader__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(BinaryReader__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(BinaryReader, _buffer),
        "_stream", offsetof(BinaryReader, _stream));

    return type;
}

void BinaryReader___ObjInit(BinaryReader* __this, ::app::Uno::IO::Stream* stream)
{
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 64);
    __this->LittleEndian(true);
}

void BinaryReader__Dispose(BinaryReader* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Dispose();
}

void BinaryReader__FillBuffer(BinaryReader* __this, int byteCount)
{
    if ((byteCount < 0) || (byteCount > 64))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("byteCount")));
    }

    int offset = 0;

    do
    {
        int read = ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Read(__this->_buffer, offset, byteCount - offset);

        if (read == 0)
        {
            U_THROW(::app::Uno::IO::EndOfStreamException__New_4(NULL));
        }

        offset = offset + read;
    }
    while (offset < byteCount);
}

bool BinaryReader__get_LittleEndian(BinaryReader* __this)
{
    return __this->_LittleEndian;
}

BinaryReader* BinaryReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    BinaryReader* inst = (BinaryReader*)::uAllocObject(sizeof(BinaryReader), BinaryReader__typeof());
    inst->_ObjInit(stream);
    return inst;
}

int BinaryReader__Read7BitEncodedInt(BinaryReader* __this)
{
    int count = 0;
    int shift = 0;

    while (shift != 35)
    {
        ::uByte b = __this->ReadByte();
        count = count | ((b & 127) << shift);
        shift = shift + 7;

        if ((b & 128) == 0)
        {
            return count;
        }
    }

    U_THROW(::app::Uno::FormatException__New_3(NULL, ::uGetConstString("Invalid 7 bit encoded int")));
}

::uByte BinaryReader__ReadByte(BinaryReader* __this)
{
    __this->FillBuffer(1);
    return ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0);
}

::uArray* BinaryReader__ReadBytes(BinaryReader* __this, int byteCount)
{
    if (byteCount < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("byteCount")));
    }

    ::uArray* buffer = ::uNewArray(::app::Uno::Byte__typeof(), byteCount);
    int offset = 0;

    do
    {
        int read = ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Read(buffer, offset, byteCount - offset);
        offset = offset + read;

        if (read == 0)
        {
            break;
        }
    }
    while (offset < byteCount);

    if (offset == byteCount)
    {
        return buffer;
    }

    ::uArray* result = ::uNewArray(::app::Uno::Byte__typeof(), offset);

    for (int i = 0; i < offset; i++)
    {
        ::uPtr< ::uArray*>(result)->Item< ::uByte>(i) = ::uPtr< ::uArray*>(buffer)->Item< ::uByte>(i);
    }

    return result;
}

int BinaryReader__ReadInt(BinaryReader* __this)
{
    __this->FillBuffer(4);
    return ::app::Uno::Runtime::Implementation::BufferImpl__GetInt(NULL, __this->_buffer, 0, __this->LittleEndian());
}

::uString* BinaryReader__ReadString(BinaryReader* __this)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__DecodeUtf8(NULL, __this->ReadBytes(__this->Read7BitEncodedInt()));
}

void BinaryReader__set_LittleEndian(BinaryReader* __this, bool value)
{
    __this->_LittleEndian = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BinaryWriter__uType* BinaryWriter__typeof()
{
    static ::uStaticStrong<BinaryWriter__uType*> type;
    if (type != NULL) return type;

    type = (BinaryWriter__uType*)::uAllocClassType(sizeof(BinaryWriter__uType), "Uno.IO.BinaryWriter", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))BinaryWriter__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(BinaryWriter__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(BinaryWriter, _buffer),
        "_stream", offsetof(BinaryWriter, _stream));

    return type;
}

void BinaryWriter___ObjInit(BinaryWriter* __this, ::app::Uno::IO::Stream* stream)
{
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 64);
    __this->LittleEndian(true);
}

void BinaryWriter__Dispose(BinaryWriter* __this)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Dispose();
}

bool BinaryWriter__get_LittleEndian(BinaryWriter* __this)
{
    return __this->_LittleEndian;
}

BinaryWriter* BinaryWriter__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    BinaryWriter* inst = (BinaryWriter*)::uAllocObject(sizeof(BinaryWriter), BinaryWriter__typeof());
    inst->_ObjInit(stream);
    return inst;
}

void BinaryWriter__set_LittleEndian(BinaryWriter* __this, bool value)
{
    __this->_LittleEndian = value;
}

void BinaryWriter__Write_17(BinaryWriter* __this, ::uByte value)
{
    ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(0) = value;
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 1);
}

void BinaryWriter__Write_19(BinaryWriter* __this, ::uArray* value)
{
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(value, 0, ::uPtr< ::uArray*>(value)->Length());
}

void BinaryWriter__Write_21(BinaryWriter* __this, int value)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetInt(NULL, __this->_buffer, 0, value, __this->LittleEndian());
    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, 4);
}

void BinaryWriter__Write_8(BinaryWriter* __this, ::uString* value)
{
    ::uArray* bytes = ::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, value);
    __this->Write7BitEncodedInt(::uPtr< ::uArray*>(bytes)->Length());
    __this->Write_19(bytes);
}

void BinaryWriter__Write7BitEncodedInt(BinaryWriter* __this, int value)
{
    ::uUInt v = (::uUInt)value;

    while (v >= 128u)
    {
        __this->Write_17((::uByte)(v | 128u));
        v = v >> 7;
    }

    __this->Write_17((::uByte)v);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CppXliStream__uType* CppXliStream__typeof()
{
    static ::uStaticStrong<CppXliStream__uType*> type;
    if (type != NULL) return type;

    type = (CppXliStream__uType*)::uAllocClassType(sizeof(CppXliStream__uType), "Uno.IO.CppXliStream", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::IO::Stream__typeof());
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::Stream*, bool))CppXliStream__Dispose_1;
    type->__fp_Flush = (void(*)(::app::Uno::IO::Stream*))CppXliStream__Flush;
    type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))CppXliStream__get_Length;
    type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))CppXliStream__get_Position;
    type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))CppXliStream__Read;
    type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))CppXliStream__set_Position;
    type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))CppXliStream__Write;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(CppXliStream__uType, __interface_0));

    return type;
}

void CppXliStream___ObjInit_1(CppXliStream* __this, ::Xli::Stream* handle)
{
    ::app::Uno::IO::Stream___ObjInit(__this);
    __this->_handle = handle;
}

void CppXliStream__Dispose_1(CppXliStream* __this, bool disposing_)
{
    if (__this->_handle != 0)
    {
      __this->_handle->Release();
      __this->_handle = 0;
    }
}

void CppXliStream__Flush(CppXliStream* __this)
{
    try
    {
        __this->_handle->Flush();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uLong CppXliStream__get_Length(CppXliStream* __this)
{
    try
    {
        return __this->_handle->GetLength();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uLong CppXliStream__get_Position(CppXliStream* __this)
{
    try
    {
        return __this->_handle->GetPosition();
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

CppXliStream* CppXliStream__New_1(::uStatic* __this, ::Xli::Stream* handle)
{
    CppXliStream* inst = (CppXliStream*)::uAllocObject(sizeof(CppXliStream), CppXliStream__typeof());
    inst->_ObjInit_1(handle);
    return inst;
}

int CppXliStream__Read(CppXliStream* __this, ::uArray* dst_, int byteOffset_, int byteCount_)
{
    try
    {
        // TODO: Bounds check
        return __this->_handle->Read((::uByte*)dst_->Ptr() + byteOffset_, 1, byteCount_);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void CppXliStream__set_Position(CppXliStream* __this, ::uLong value_)
{
    try
    {
        __this->_handle->Seek((int)value_, Xli::SeekOriginBegin);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void CppXliStream__Write(CppXliStream* __this, ::uArray* src_, int byteOffset_, int byteCount_)
{
    try
    {
        // TODO: Bounds check
        __this->_handle->Write((const ::uByte*)src_->Ptr() + byteOffset_, 1, byteCount_);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CppXliStreamHandle__uType* CppXliStreamHandle__typeof()
{
    static ::uStaticStrong<CppXliStreamHandle__uType*> type;
    if (type != NULL) return type;

    type = (CppXliStreamHandle__uType*)::uAllocStructType(sizeof(CppXliStreamHandle__uType), "Uno.IO.CppXliStreamHandle", sizeof(::Xli::Stream*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Directory__uType* Directory__typeof()
{
    static ::uStaticStrong<Directory__uType*> type;
    if (type != NULL) return type;

    type = (Directory__uType*)::uAllocClassType(sizeof(Directory__uType), "Uno.IO.Directory");

    return type;
}

::uString* Directory__GetUserDirectory(::uStatic* __this, int dir)
{
    {
        return ::app::Uno::IO::FileSystemImpl__GetUserDirectory(NULL, dir);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EndOfStreamException__uType* EndOfStreamException__typeof()
{
    static ::uStaticStrong<EndOfStreamException__uType*> type;
    if (type != NULL) return type;

    type = (EndOfStreamException__uType*)::uAllocClassType(sizeof(EndOfStreamException__uType), "Uno.IO.EndOfStreamException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::IO::IOException__typeof());

    return type;
}

void EndOfStreamException___ObjInit_3(EndOfStreamException* __this)
{
    ::app::Uno::IO::IOException___ObjInit_2(__this, ::uGetConstString("Reached end of stream"));
}

EndOfStreamException* EndOfStreamException__New_4(::uStatic* __this)
{
    EndOfStreamException* inst = (EndOfStreamException*)::uAllocObject(sizeof(EndOfStreamException), EndOfStreamException__typeof());
    inst->_ObjInit_3();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

File__uType* File__typeof()
{
    static ::uStaticStrong<File__uType*> type;
    if (type != NULL) return type;

    type = (File__uType*)::uAllocClassType(sizeof(File__uType), "Uno.IO.File");

    return type;
}

void File__Delete(::uStatic* __this, ::uString* filename)
{
    ::app::Uno::IO::FileSystemImpl__DeleteFile(NULL, filename);
}

bool File__Exists(::uStatic* __this, ::uString* filename)
{
    return ::app::Uno::IO::FileSystemImpl__IsFile(NULL, filename);
}

::app::Uno::IO::Stream* File__Open(::uStatic* __this, ::uString* filename, int filemode)
{
    return (::app::Uno::IO::Stream*)::app::Uno::IO::CppXliStream__New_1(NULL, ::app::Uno::IO::FileSystemImpl__CppXliOpen(NULL, filename, filemode));
}

::app::Uno::IO::Stream* File__OpenRead(::uStatic* __this, ::uString* filename)
{
    return (::app::Uno::IO::Stream*)::app::Uno::IO::CppXliStream__New_1(NULL, ::app::Uno::IO::FileSystemImpl__CppXliOpenRead(NULL, filename));
}

::uArray* File__ReadAllBytes(::uStatic* __this, ::uString* filename)
{
    return ::app::Uno::IO::FileSystemImpl__ReadAllBytes(NULL, filename);
}

::uString* File__ReadAllText(::uStatic* __this, ::uString* filename)
{
    return ::app::Uno::IO::FileSystemImpl__ReadAllText(NULL, filename);
}

void File__WriteAllBytes(::uStatic* __this, ::uString* filename, ::uArray* bytes)
{
    ::app::Uno::IO::FileSystemImpl__WriteAllBytes(NULL, filename, bytes);
}

void File__WriteAllText(::uStatic* __this, ::uString* filename, ::uString* text)
{
    ::app::Uno::IO::FileSystemImpl__WriteAllText(NULL, filename, text);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FileMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.IO.FileMode", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "CreateNew", 1LL,
        "Create", 2LL,
        "Open", 3LL,
        "OpenOrCreate", 4LL,
        "Truncate", 5LL,
        "Append", 6LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileSystemImpl__uType* FileSystemImpl__typeof()
{
    static ::uStaticStrong<FileSystemImpl__uType*> type;
    if (type != NULL) return type;

    type = (FileSystemImpl__uType*)::uAllocClassType(sizeof(FileSystemImpl__uType), "Uno.IO.FileSystemImpl");

    return type;
}

::Xli::Stream* FileSystemImpl__CppXliOpen(::uStatic* __this, ::uString* filename_, int filemode_)
{
    try
    {
        Xli::FileMode xliFileMode = Xli::FileModeRead;
        switch(filemode_)
        {
            case 5:
                if (!Xli::Disk->IsFile(::uStringToXliString(filename_)))
                {
                    XLI_THROW("File not found");
                }
            case 2:
                {
                    Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeWrite);
                    f->Close();
                    xliFileMode = Xli::FileModeReadWrite;
                    break;
                }
    
            case 1:
                if (Xli::Disk->IsFile(::uStringToXliString(filename_)))
                {
                    XLI_THROW("File already exists.");
                }
                xliFileMode = Xli::FileModeWrite;
                break;
    
            case 4:
                if (!Xli::Disk->IsFile(::uStringToXliString(filename_)))
                {
                    Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeWrite);
                    f->Close();
                }
            case 3:
                xliFileMode = Xli::FileModeReadWrite;   
                break;
    
            case 6:
                xliFileMode = Xli::FileModeAppend;
                break;
        }
        return Xli::Disk->OpenFile(::uStringToXliString(filename_), xliFileMode);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::Xli::Stream* FileSystemImpl__CppXliOpenRead(::uStatic* __this, ::uString* filename_)
{
    try
    {
        return Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeRead);
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__DeleteFile(::uStatic* __this, ::uString* filename_)
{
    try
    {
        Xli::Disk->DeleteFile(::uStringToXliString(filename_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uString* FileSystemImpl__GetUserDirectory(::uStatic* __this, int dir_)
{
    try
    {
        return ::uStringFromXliString(Xli::Disk->GetSystemDirectory((Xli::SystemDirectory)dir_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

bool FileSystemImpl__IsFile(::uStatic* __this, ::uString* filename_)
{
    try
    {
        return Xli::Disk->IsFile(::uStringToXliString(filename_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uArray* FileSystemImpl__ReadAllBytes(::uStatic* __this, ::uString* filename_)
{
    try
    {
        Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeRead);
        ::uArray* result = ::uNewArray(::app::Uno::Byte__typeof(), f->GetLength());
        f->ReadSafe(result->Ptr(), 1, result->Length());
        return result;
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uString* FileSystemImpl__ReadAllText(::uStatic* __this, ::uString* filename_)
{
    try
    {
        return ::uStringFromXliString(Xli::Text::Load(::uStringToXliString(filename_)));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__WriteAllBytes(::uStatic* __this, ::uString* filename_, ::uArray* bytes_)
{
    try
    {
        Xli::Managed<Xli::Stream> f = Xli::Disk->OpenFile(::uStringToXliString(filename_), Xli::FileModeWrite);
        f->Write(bytes_->Ptr(), 1, bytes_->Length());
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

void FileSystemImpl__WriteAllText(::uStatic* __this, ::uString* filename_, ::uString* text_)
{
    try
    {
        Xli::Text::Save(::uStringToXliString(filename_), ::uStringToXliString(text_));
    }
    catch (const Xli::Exception& e)
    {
        throw uThrowable(::app::Uno::IO::IOException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IOException__uType* IOException__typeof()
{
    static ::uStaticStrong<IOException__uType*> type;
    if (type != NULL) return type;

    type = (IOException__uType*)::uAllocClassType(sizeof(IOException__uType), "Uno.IO.IOException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void IOException___ObjInit_2(IOException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

IOException* IOException__New_3(::uStatic* __this, ::uString* message)
{
    IOException* inst = (IOException*)::uAllocObject(sizeof(IOException), IOException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MemoryStream__uType* MemoryStream__typeof()
{
    static ::uStaticStrong<MemoryStream__uType*> type;
    if (type != NULL) return type;

    type = (MemoryStream__uType*)::uAllocClassType(sizeof(MemoryStream__uType), "Uno.IO.MemoryStream", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::IO::Stream__typeof());
    type->__fp_Flush = (void(*)(::app::Uno::IO::Stream*))MemoryStream__Flush;
    type->__fp_get_Length = (::uLong(*)(::app::Uno::IO::Stream*))MemoryStream__get_Length;
    type->__fp_get_Position = (::uLong(*)(::app::Uno::IO::Stream*))MemoryStream__get_Position;
    type->__fp_Read = (int(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))MemoryStream__Read;
    type->__fp_set_Position = (void(*)(::app::Uno::IO::Stream*, ::uLong))MemoryStream__set_Position;
    type->__fp_Write = (void(*)(::app::Uno::IO::Stream*, ::uArray*, int, int))MemoryStream__Write;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(MemoryStream__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(MemoryStream, _buffer));

    return type;
}

void MemoryStream___ObjInit_1(MemoryStream* __this)
{
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 0);
    __this->_nextIncrease = 256;
    ::app::Uno::IO::Stream___ObjInit(__this);
}

void MemoryStream__EnsureCapacity(MemoryStream* __this, int byteCount)
{
    if ((__this->Position() + (::uLong)byteCount) <= (::uLong)__this->Capacity())
    {
        return;
    }
    else if ((__this->Position() + (::uLong)byteCount) <= (::uLong)(__this->Capacity() + __this->_nextIncrease))
    {
        __this->ResizeTo(__this->Capacity() + __this->_nextIncrease);
    }
    else
    {
        __this->ResizeTo((int)__this->Position() + byteCount);
    }
}

void MemoryStream__Flush(MemoryStream* __this)
{
}

int MemoryStream__get_Capacity(MemoryStream* __this)
{
    return ::uPtr< ::uArray*>(__this->_buffer)->Length();
}

::uLong MemoryStream__get_Length(MemoryStream* __this)
{
    return __this->_length;
}

::uLong MemoryStream__get_Position(MemoryStream* __this)
{
    return __this->_Position;
}

::uArray* MemoryStream__GetBuffer(MemoryStream* __this)
{
    return __this->_buffer;
}

MemoryStream* MemoryStream__New_1(::uStatic* __this)
{
    MemoryStream* inst = (MemoryStream*)::uAllocObject(sizeof(MemoryStream), MemoryStream__typeof());
    inst->_ObjInit_1();
    return inst;
}

int MemoryStream__Read(MemoryStream* __this, ::uArray* dst, int byteOffset, int byteCount)
{
    int i = 0;

    for (; (i < byteCount) && ((__this->Position() + (::uLong)i) < __this->Length()); i++)
    {
        ::uPtr< ::uArray*>(dst)->Item< ::uByte>(i + byteOffset) = ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>((int)__this->Position() + i);
    }

    __this->Position(__this->Position() + (::uLong)i);
    return i;
}

void MemoryStream__ResizeTo(MemoryStream* __this, int newSize)
{
    ::uArray* newBuffer = ::uNewArray(::app::Uno::Byte__typeof(), newSize);
    ::app::Uno::Array__Copy__byte(NULL, __this->_buffer, newBuffer, ::uPtr< ::uArray*>(__this->_buffer)->Length());
    __this->_buffer = newBuffer;
    __this->_nextIncrease = __this->Capacity();
}

void MemoryStream__set_Position(MemoryStream* __this, ::uLong value)
{
    __this->_Position = value;
}

void MemoryStream__Write(MemoryStream* __this, ::uArray* src, int byteOffset, int byteCount)
{
    __this->EnsureCapacity(byteCount);

    for (int i = byteOffset; i < (byteOffset + byteCount); i++)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>((int)__this->Position()) = ::uPtr< ::uArray*>(src)->Item< ::uByte>(i);
        __this->Position(__this->Position() + 1ll);
    }

    if (__this->Position() > __this->Length())
    {
        __this->_length = __this->Position();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Path__uType* Path__typeof()
{
    static ::uStaticStrong<Path__uType*> type;
    if (type != NULL) return type;

    type = (Path__uType*)::uAllocClassType(sizeof(Path__uType), "Uno.IO.Path");

    return type;
}

::uString* Path__Combine(::uStatic* __this, ::uString* a, ::uString* b)
{
    {
        if (Path__IsPathRooted(NULL, b))
        {
            return b;
        }

        if ((::app::Uno::String__IsNullOrEmpty(NULL, a) || (::uPtr< ::uString*>(a)->Item(::uPtr< ::uString*>(a)->Length() - 1) == '\\')) || (::uPtr< ::uString*>(a)->Item(::uPtr< ::uString*>(a)->Length() - 1) == '/'))
        {
            return ::app::Uno::String__op_Addition_1(NULL, a, b);
        }

        return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, a, ::uBox< ::uChar>(::app::Uno::Char__typeof(), Path__get_DirectorySeparatorChar(NULL))), b);
    }
}

::uChar Path__get_DirectorySeparatorChar(::uStatic* __this)
{
    return '/';
}

::uString* Path__GetFileName(::uStatic* __this, ::uString* filename)
{
    {
        if (::app::Uno::String__op_Equality(NULL, filename, NULL))
        {
            return NULL;
        }

        for (int i = ::uPtr< ::uString*>(filename)->Length() - 1; i >= 0; i--)
        {
            switch (filename->Item(i))
            {
                case '\\':
                case '/':
                {
                    return ::app::Uno::String::Substring_1(::uPtr< ::uString*>(filename), i + 1);
                }
            }
        }

        return filename;
    }
}

bool Path__IsPathRooted(::uStatic* __this, ::uString* filename)
{
    return ((::uPtr< ::uString*>(filename)->Length() > 0) && ((::uPtr< ::uString*>(filename)->Item(0) == '\\') || (::uPtr< ::uString*>(filename)->Item(0) == '/'))) || ((::uPtr< ::uString*>(filename)->Length() > 1) && (::uPtr< ::uString*>(filename)->Item(1) == ':'));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Stream__uType* Stream__typeof()
{
    static ::uStaticStrong<Stream__uType*> type;
    if (type != NULL) return type;

    type = (Stream__uType*)::uAllocClassType(sizeof(Stream__uType), "Uno.IO.Stream", false, 1, 0, 0);

    type->__fp_Close = Stream__Close;
    type->__fp_Dispose_1 = Stream__Dispose_1;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Stream__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Stream__uType, __interface_0));

    return type;
}

void Stream___ObjInit(Stream* __this)
{
}

void Stream__Close(Stream* __this)
{
    __this->Dispose_1(true);
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void Stream__Dispose(Stream* __this)
{
    __this->Close();
}

void Stream__Dispose_1(Stream* __this, bool disposing)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StreamReader__uType* StreamReader__typeof()
{
    static ::uStaticStrong<StreamReader__uType*> type;
    if (type != NULL) return type;

    type = (StreamReader__uType*)::uAllocClassType(sizeof(StreamReader__uType), "Uno.IO.StreamReader", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::IO::TextReader__typeof());
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::TextReader*, bool))StreamReader__Dispose_1;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(StreamReader__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(StreamReader, _buffer),
        "_stream", offsetof(StreamReader, _stream));

    return type;
}

void StreamReader___ObjInit_1(StreamReader* __this, ::app::Uno::IO::Stream* stream)
{
    ::app::Uno::IO::TextReader___ObjInit(__this);
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Char__typeof(), 256);
    __this->_index = 0;
    __this->_length = 0;
}

void StreamReader__Dispose_1(StreamReader* __this, bool disposing)
{
    if (disposing && (__this->_stream != NULL))
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Close();
        __this->_stream = NULL;
    }

    ::app::Uno::IO::TextReader__Dispose_1(__this, disposing);
}

StreamReader* StreamReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    StreamReader* inst = (StreamReader*)::uAllocObject(sizeof(StreamReader), StreamReader__typeof());
    inst->_ObjInit_1(stream);
    return inst;
}

void StreamReader__ReadBuffer(StreamReader* __this)
{
    ::uArray* array = ::uNewArray(::app::Uno::Byte__typeof(), 256);
    __this->_length = ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Read(array, 0, 256);

    for (int i = 0; i < __this->_length; i++)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uChar>(i) = (::uChar)array->Item< ::uByte>(i);
    }

    __this->_index = 0;
}

::uString* StreamReader__ReadToEnd(StreamReader* __this)
{
    ::app::Uno::Text::StringBuilder* stringBuilder = ::app::Uno::Text::StringBuilder__New_1(NULL);

    if (__this->_length == 0)
    {
        __this->ReadBuffer();
    }

    while (__this->_length != 0)
    {
        int count = __this->_length - __this->_index;
        ::uArray* array = ::uNewArray(::app::Uno::Char__typeof(), count);

        for (int i = 0; i < count; i++)
        {
            array->Item< ::uChar>(i) = ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uChar>(__this->_index + i);
        }

        ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->Append(array);
        __this->ReadBuffer();
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->ToString();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StreamWriter__uType* StreamWriter__typeof()
{
    static ::uStaticStrong<StreamWriter__uType*> type;
    if (type != NULL) return type;

    type = (StreamWriter__uType*)::uAllocClassType(sizeof(StreamWriter__uType), "Uno.IO.StreamWriter", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::IO::TextWriter__typeof());
    type->__fp_Dispose_1 = (void(*)(::app::Uno::IO::TextWriter*, bool))StreamWriter__Dispose_1;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(StreamWriter__uType, __interface_0));

    type->SetStrongRefs(
        "_buffer", offsetof(StreamWriter, _buffer),
        "_stream", offsetof(StreamWriter, _stream));

    return type;
}

void StreamWriter___ObjInit_1(StreamWriter* __this, ::app::Uno::IO::Stream* stream)
{
    ::app::Uno::IO::TextWriter___ObjInit(__this);
    __this->_stream = stream;
    __this->_buffer = ::uNewArray(::app::Uno::Byte__typeof(), 256);
    __this->_index = 0;
}

void StreamWriter__Dispose_1(StreamWriter* __this, bool disposing)
{
    __this->Flush();

    if (disposing && (__this->_stream != NULL))
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Close();
    }

    ::app::Uno::IO::TextWriter__Dispose_1(__this, disposing);
}

void StreamWriter__Flush(StreamWriter* __this)
{
    if (__this->_index != 0)
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, __this->_index);
        __this->_index = 0;
    }

    ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Flush();
}

StreamWriter* StreamWriter__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream)
{
    StreamWriter* inst = (StreamWriter*)::uAllocObject(sizeof(StreamWriter), StreamWriter__typeof());
    inst->_ObjInit_1(stream);
    return inst;
}

void StreamWriter__Write_13(StreamWriter* __this, ::uArray* array, int index, int count)
{
    if ((__this->_index + count) >= 256)
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(__this->_buffer, 0, __this->_index);
        __this->_index = 0;
    }

    if (count >= 256)
    {
        ::uPtr< ::app::Uno::IO::Stream*>(__this->_stream)->Write(array, index, count);
        return;
    }

    for (int i = 0; i < count; i++)
    {
        ::uPtr< ::uArray*>(__this->_buffer)->Item< ::uByte>(__this->_index++) = ::uPtr< ::uArray*>(array)->Item< ::uByte>(index + i);
    }
}

void StreamWriter__Write_7(StreamWriter* __this, ::uString* value)
{
    ::uArray* array = ::app::Uno::Runtime::Implementation::TextEncodingImpl__EncodeUtf8(NULL, value);
    __this->Write_13(array, 0, ::uPtr< ::uArray*>(array)->Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextReader__uType* TextReader__typeof()
{
    static ::uStaticStrong<TextReader__uType*> type;
    if (type != NULL) return type;

    type = (TextReader__uType*)::uAllocClassType(sizeof(TextReader__uType), "Uno.IO.TextReader", false, 1, 0, 0);

    type->__fp_Dispose_1 = TextReader__Dispose_1;
    type->__interface_0.__fp_Dispose = (void(*)(void*))TextReader__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(TextReader__uType, __interface_0));

    return type;
}

void TextReader___ObjInit(TextReader* __this)
{
}

void TextReader__Dispose(TextReader* __this)
{
    __this->Dispose_1(true);
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void TextReader__Dispose_1(TextReader* __this, bool disposing)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextWriter__uType* TextWriter__typeof()
{
    static ::uStaticStrong<TextWriter__uType*> type;
    if (type != NULL) return type;

    type = (TextWriter__uType*)::uAllocClassType(sizeof(TextWriter__uType), "Uno.IO.TextWriter", false, 1, 0, 0);

    type->__fp_Dispose_1 = TextWriter__Dispose_1;
    type->__interface_0.__fp_Dispose = (void(*)(void*))TextWriter__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(TextWriter__uType, __interface_0));

    return type;
}

void TextWriter___ObjInit(TextWriter* __this)
{
}

void TextWriter__Dispose(TextWriter* __this)
{
    __this->Dispose_1(true);
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void TextWriter__Dispose_1(TextWriter* __this, bool disposing)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UserDirectory__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.IO.UserDirectory", ::app::Uno::Int__typeof(), 10);

    type->SetLiterals(
        "Config", 0LL,
        "Data", 1LL,
        "Desktop", 2LL,
        "Downloads", 3LL,
        "Templates", 4LL,
        "Public", 5LL,
        "Documents", 6LL,
        "Music", 7LL,
        "Pictures", 8LL,
        "Videos", 9LL);

    return type;
}

}}}
