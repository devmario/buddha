#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Collections-1b08b4db.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Collec-b33a30de.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-45ef4c4b.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.EventHandler__Uno_EventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.MemoryStream.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.IO.StreamReader.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.Expression__float.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Resource.h>
#include <app/Uno.UX.StreamExtensions.h>
#include <app/Uno.UX.UXAttachedPropertyGetterAttribute.h>
#include <app/Uno.UX.UXAttachedPropertySetterAttribute.h>
#include <app/Uno.UX.UXAttachedPropertyStyleSetterAttribute.h>
#include <app/Uno.UX.UXAutoGenericAttribute.h>
#include <app/Uno.UX.UXContentAttribute.h>
#include <app/Uno.UX.UXContentModeAttribute.h>
#include <app/Uno.UX.UXGlobalResourceAttribute.h>
#include <app/Uno.UX.UXImplicitPropertySetterAttribute.h>
#include <app/Uno.UX.UXLineNumberAttribute.h>
#include <app/Uno.UX.UXNameAttribute.h>
#include <app/Uno.UX.UXParameterAttribute.h>
#include <app/Uno.UX.UXPrimaryAttribute.h>
#include <app/Uno.UX.UXSourceFileNameAttribute.h>
#include <app/Uno.UX.UXStyleListAttribute.h>
#include <app/Uno.UX.UXValueBindingAliasAttribute.h>
#include <app/Uno.UX.UXValueBindingArgumentAttribute.h>
#include <app/Uno.UX.UXValueChangedEventAttribute.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__double.h>
#include <app/Uno.UX.ValueChangedArgs__float.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__double.h>
#include <app/Uno.UX.ValueChangedHandler__float.h>
#include <app/Uno.UX.ValueChangedHandler__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {
namespace Uno {
namespace UX {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BundleFileSource__uType* BundleFileSource__typeof()
{
    static ::uStaticStrong<BundleFileSource__uType*> type;
    if (type != NULL) return type;

    type = (BundleFileSource__uType*)::uAllocClassType(sizeof(BundleFileSource__uType), "Uno.UX.BundleFileSource", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::FileSource__typeof());
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))BundleFileSource__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))BundleFileSource__GetHashCode;
    type->__fp_OpenRead = (::app::Uno::IO::Stream*(*)(::app::Uno::UX::FileSource*))BundleFileSource__OpenRead;
    type->__fp_ReadAllBytes = (::uArray*(*)(::app::Uno::UX::FileSource*))BundleFileSource__ReadAllBytes;
    type->__fp_ReadAllText = (::uString*(*)(::app::Uno::UX::FileSource*))BundleFileSource__ReadAllText;

    type->SetStrongRefs(
        "BundleFile", offsetof(BundleFileSource, BundleFile));

    return type;
}

void BundleFileSource___ObjInit_1(BundleFileSource* __this, ::app::Uno::BundleFile* bundleFile)
{
    ::app::Uno::UX::FileSource___ObjInit(__this, ::uPtr< ::app::Uno::BundleFile*>(bundleFile)->Name());
    __this->BundleFile = bundleFile;
}

bool BundleFileSource__Equals(BundleFileSource* __this, ::uObject* o)
{
    BundleFileSource* bfs = ::uAs< BundleFileSource*>(o, BundleFileSource__typeof());

    if (bfs == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Uno::BundleFile*>(::uPtr< BundleFileSource*>(bfs)->BundleFile), (::uObject*)__this->BundleFile);
}

int BundleFileSource__GetHashCode(BundleFileSource* __this)
{
    return ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::BundleFile*>(__this->BundleFile));
}

BundleFileSource* BundleFileSource__New_1(::uStatic* __this, ::app::Uno::BundleFile* bundleFile)
{
    BundleFileSource* inst = (BundleFileSource*)::uAllocObject(sizeof(BundleFileSource), BundleFileSource__typeof());
    inst->_ObjInit_1(bundleFile);
    return inst;
}

::app::Uno::IO::Stream* BundleFileSource__OpenRead(BundleFileSource* __this)
{
    return ::uPtr< ::app::Uno::BundleFile*>(__this->BundleFile)->OpenRead();
}

::uArray* BundleFileSource__ReadAllBytes(BundleFileSource* __this)
{
    return ::uPtr< ::app::Uno::BundleFile*>(__this->BundleFile)->ReadAllBytes();
}

::uString* BundleFileSource__ReadAllText(BundleFileSource* __this)
{
    return ::uPtr< ::app::Uno::BundleFile*>(__this->BundleFile)->ReadAllText();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Expression__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.Expression<float>", 0);

    type->SetSignature(::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileSource__uType* FileSource__typeof()
{
    static ::uStaticStrong<FileSource__uType*> type;
    if (type != NULL) return type;

    type = (FileSource__uType*)::uAllocClassType(sizeof(FileSource__uType), "Uno.UX.FileSource", false, 0, 2, 0);

    type->__fp_ReadAllBytes = FileSource__ReadAllBytes;
    type->__fp_ReadAllText = FileSource__ReadAllText;

    type->SetStrongRefs(
        "DataChanged", offsetof(FileSource, DataChanged),
        "Name", offsetof(FileSource, Name));

    return type;
}

void FileSource___ObjInit(FileSource* __this, ::uString* name)
{
    __this->Name = name;
}

void FileSource__add_DataChanged(FileSource* __this, ::uDelegate* value)
{
    __this->DataChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->DataChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_EventArgs__typeof());
}

FileSource* FileSource__op_Implicit(::uStatic* __this, ::app::Uno::BundleFile* bundleFile)
{
    return (FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, bundleFile);
}

::uArray* FileSource__ReadAllBytes(FileSource* __this)
{
    return ::app::Uno::UX::StreamExtensions__ReadAllBytes(NULL, ::app::Uno::IO::BinaryReader__New_1(NULL, __this->OpenRead()));
}

::uString* FileSource__ReadAllText(FileSource* __this)
{
    return ::uPtr< ::app::Uno::IO::StreamReader*>(::app::Uno::IO::StreamReader__New_1(NULL, __this->OpenRead()))->ReadToEnd();
}

void FileSource__remove_DataChanged(FileSource* __this, ::uDelegate* value)
{
    __this->DataChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->DataChanged, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_EventArgs__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IFactory__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.UX.IFactory");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ITemplate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.UX.ITemplate");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*> Resource___globals;

Resource__uType* Resource__typeof()
{
    static ::uStaticStrong<Resource__uType*> type;
    if (type != NULL) return type;

    type = (Resource__uType*)::uAllocClassType(sizeof(Resource__uType), "Uno.UX.Resource", false, 0, 2, 0);

    type->SetStrongRefs(
        "_Key", offsetof(Resource, _Key),
        "_Value", offsetof(Resource, _Value));

    return type;
}

void Resource___ObjInit(Resource* __this, ::uString* key, ::uObject* value)
{
    __this->Key(key);
    __this->Value(value);
}

::uString* Resource__get_Key(Resource* __this)
{
    return __this->_Key;
}

::uObject* Resource__get_Value(Resource* __this)
{
    return __this->_Value;
}

::uString* Resource__GetGlobalKey(::uStatic* __this, ::uObject* obj)
{
    if (Resource___globals == NULL)
    {
        return NULL;
    }

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object_ enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object_ list = enum_124.Current();

        if (::uPtr< ::app::Uno::Collections::List__object*>(list.Value())->Contains(obj))
        {
            return list.Key();
        }
    }

    return NULL;
}

Resource* Resource__New_1(::uStatic* __this, ::uString* key, ::uObject* value)
{
    Resource* inst = (Resource*)::uAllocObject(sizeof(Resource), Resource__typeof());
    inst->_ObjInit(key, value);
    return inst;
}

void Resource__set_Key(Resource* __this, ::uString* value)
{
    __this->_Key = value;
}

void Resource__set_Value(Resource* __this, ::uObject* value)
{
    __this->_Value = value;
}

void Resource__SetGlobalKey(::uStatic* __this, ::uObject* obj, ::uString* key)
{
    if (Resource___globals == NULL)
    {
        Resource___globals = ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object___New_1(NULL);
    }

    for (::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_object_*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->Values())->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::List__object* list = enum_123.Current();

        if (::uPtr< ::app::Uno::Collections::List__object*>(list)->Contains(obj))
        {
            ::uPtr< ::app::Uno::Collections::List__object*>(list)->Remove(obj);
            break;
        }
    }

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->ContainsKey(key))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->Add(key, ::app::Uno::Collections::List__object__New_1(NULL));
    }

    ::uPtr< ::app::Uno::Collections::List__object*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->Item(key))->Add(obj);
}

bool Resource__TryFindGlobal(::uStatic* __this, ::uString* key, ::uDelegate* acceptor, ::uObject** res)
{
    if (Resource___globals != NULL)
    {
        ::app::Uno::Collections::List__object* list;

        if (::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(Resource___globals)->TryGetValue(key, &list))
        {
            for (int i = ::uPtr< ::app::Uno::Collections::List__object*>(list)->Count(); (i--) > 0; )
            {
                ::uObject* v = ::uPtr< ::app::Uno::Collections::List__object*>(list)->Item(i);

                if (::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>(v))
                {
                    *res = v;
                    return true;
                }
            }
        }
    }

    *res = NULL;
    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StreamExtensions__uType* StreamExtensions__typeof()
{
    static ::uStaticStrong<StreamExtensions__uType*> type;
    if (type != NULL) return type;

    type = (StreamExtensions__uType*)::uAllocClassType(sizeof(StreamExtensions__uType), "Uno.UX.StreamExtensions");

    return type;
}

::uArray* StreamExtensions__ReadAllBytes(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader)
{
    int bufferSize = 4096;
    {
        ::app::Uno::IO::MemoryStream* ms = ::app::Uno::IO::MemoryStream__New_1(NULL);

        try
        {
            {
                ::uArray* buffer;

                do
                {
                    buffer = ::uPtr< ::app::Uno::IO::BinaryReader*>(reader)->ReadBytes(4096);
                    ::uPtr< ::app::Uno::IO::MemoryStream*>(ms)->Write(buffer, 0, ::uPtr< ::uArray*>(buffer)->Length());
                }
                while (::uPtr< ::uArray*>(buffer)->Length() == 4096);

                return StreamExtensions__ToArray(NULL, ms);
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)ms));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>((::uObject*)ms));
        }
    }

    U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Bug in Uno compiler, this case should never ever happen.")));
}

::uArray* StreamExtensions__ToArray(::uStatic* __this, ::app::Uno::IO::MemoryStream* memoryStream)
{
    ::uArray* buffer = ::uPtr< ::app::Uno::IO::MemoryStream*>(memoryStream)->GetBuffer();
    ::uArray* bytes = ::uNewArray(::app::Uno::Byte__typeof(), (int)memoryStream->Length());

    for (int i = 0; (::uLong)i < memoryStream->Length(); ++i)
    {
        ::uPtr< ::uArray*>(bytes)->Item< ::uByte>(i) = ::uPtr< ::uArray*>(buffer)->Item< ::uByte>(i);
    }

    return bytes;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAttachedPropertyGetterAttribute__uType* UXAttachedPropertyGetterAttribute__typeof()
{
    static ::uStaticStrong<UXAttachedPropertyGetterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAttachedPropertyGetterAttribute__uType*)::uAllocClassType(sizeof(UXAttachedPropertyGetterAttribute__uType), "Uno.UX.UXAttachedPropertyGetterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXAttachedPropertyGetterAttribute, Name));

    return type;
}

void UXAttachedPropertyGetterAttribute___ObjInit_1(UXAttachedPropertyGetterAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXAttachedPropertyGetterAttribute* UXAttachedPropertyGetterAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXAttachedPropertyGetterAttribute* inst = (UXAttachedPropertyGetterAttribute*)::uAllocObject(sizeof(UXAttachedPropertyGetterAttribute), UXAttachedPropertyGetterAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAttachedPropertySetterAttribute__uType* UXAttachedPropertySetterAttribute__typeof()
{
    static ::uStaticStrong<UXAttachedPropertySetterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAttachedPropertySetterAttribute__uType*)::uAllocClassType(sizeof(UXAttachedPropertySetterAttribute__uType), "Uno.UX.UXAttachedPropertySetterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXAttachedPropertySetterAttribute, Name));

    return type;
}

void UXAttachedPropertySetterAttribute___ObjInit_1(UXAttachedPropertySetterAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXAttachedPropertySetterAttribute* UXAttachedPropertySetterAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXAttachedPropertySetterAttribute* inst = (UXAttachedPropertySetterAttribute*)::uAllocObject(sizeof(UXAttachedPropertySetterAttribute), UXAttachedPropertySetterAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAttachedPropertyStyleSetterAttribute__uType* UXAttachedPropertyStyleSetterAttribute__typeof()
{
    static ::uStaticStrong<UXAttachedPropertyStyleSetterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAttachedPropertyStyleSetterAttribute__uType*)::uAllocClassType(sizeof(UXAttachedPropertyStyleSetterAttribute__uType), "Uno.UX.UXAttachedPropertyStyleSetterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXAttachedPropertyStyleSetterAttribute, Name));

    return type;
}

void UXAttachedPropertyStyleSetterAttribute___ObjInit_1(UXAttachedPropertyStyleSetterAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXAttachedPropertyStyleSetterAttribute* UXAttachedPropertyStyleSetterAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXAttachedPropertyStyleSetterAttribute* inst = (UXAttachedPropertyStyleSetterAttribute*)::uAllocObject(sizeof(UXAttachedPropertyStyleSetterAttribute), UXAttachedPropertyStyleSetterAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXAutoGenericAttribute__uType* UXAutoGenericAttribute__typeof()
{
    static ::uStaticStrong<UXAutoGenericAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXAutoGenericAttribute__uType*)::uAllocClassType(sizeof(UXAutoGenericAttribute__uType), "Uno.UX.UXAutoGenericAttribute", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Alias", offsetof(UXAutoGenericAttribute, Alias),
        "Property", offsetof(UXAutoGenericAttribute, Property));

    return type;
}

void UXAutoGenericAttribute___ObjInit_1(UXAutoGenericAttribute* __this, ::uString* alias, ::uString* property)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Alias = alias;
    __this->Property = property;
}

UXAutoGenericAttribute* UXAutoGenericAttribute__New_1(::uStatic* __this, ::uString* alias, ::uString* property)
{
    UXAutoGenericAttribute* inst = (UXAutoGenericAttribute*)::uAllocObject(sizeof(UXAutoGenericAttribute), UXAutoGenericAttribute__typeof());
    inst->_ObjInit_1(alias, property);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXContentAttribute__uType* UXContentAttribute__typeof()
{
    static ::uStaticStrong<UXContentAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXContentAttribute__uType*)::uAllocClassType(sizeof(UXContentAttribute__uType), "Uno.UX.UXContentAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void UXContentAttribute___ObjInit_1(UXContentAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXContentAttribute* UXContentAttribute__New_1(::uStatic* __this)
{
    UXContentAttribute* inst = (UXContentAttribute*)::uAllocObject(sizeof(UXContentAttribute), UXContentAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXContentModeAttribute__uType* UXContentModeAttribute__typeof()
{
    static ::uStaticStrong<UXContentModeAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXContentModeAttribute__uType*)::uAllocClassType(sizeof(UXContentModeAttribute__uType), "Uno.UX.UXContentModeAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Mode", offsetof(UXContentModeAttribute, Mode));

    return type;
}

void UXContentModeAttribute___ObjInit_1(UXContentModeAttribute* __this, ::uString* mode)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Mode = mode;
}

UXContentModeAttribute* UXContentModeAttribute__New_1(::uStatic* __this, ::uString* mode)
{
    UXContentModeAttribute* inst = (UXContentModeAttribute*)::uAllocObject(sizeof(UXContentModeAttribute), UXContentModeAttribute__typeof());
    inst->_ObjInit_1(mode);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXGlobalResourceAttribute__uType* UXGlobalResourceAttribute__typeof()
{
    static ::uStaticStrong<UXGlobalResourceAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXGlobalResourceAttribute__uType*)::uAllocClassType(sizeof(UXGlobalResourceAttribute__uType), "Uno.UX.UXGlobalResourceAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Alias", offsetof(UXGlobalResourceAttribute, Alias));

    return type;
}

void UXGlobalResourceAttribute___ObjInit_1(UXGlobalResourceAttribute* __this, ::uString* alias)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Alias = alias;
}

void UXGlobalResourceAttribute___ObjInit_2(UXGlobalResourceAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXGlobalResourceAttribute* UXGlobalResourceAttribute__New_1(::uStatic* __this, ::uString* alias)
{
    UXGlobalResourceAttribute* inst = (UXGlobalResourceAttribute*)::uAllocObject(sizeof(UXGlobalResourceAttribute), UXGlobalResourceAttribute__typeof());
    inst->_ObjInit_1(alias);
    return inst;
}

UXGlobalResourceAttribute* UXGlobalResourceAttribute__New_2(::uStatic* __this)
{
    UXGlobalResourceAttribute* inst = (UXGlobalResourceAttribute*)::uAllocObject(sizeof(UXGlobalResourceAttribute), UXGlobalResourceAttribute__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXImplicitPropertySetterAttribute__uType* UXImplicitPropertySetterAttribute__typeof()
{
    static ::uStaticStrong<UXImplicitPropertySetterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXImplicitPropertySetterAttribute__uType*)::uAllocClassType(sizeof(UXImplicitPropertySetterAttribute__uType), "Uno.UX.UXImplicitPropertySetterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Type", offsetof(UXImplicitPropertySetterAttribute, Type));

    return type;
}

void UXImplicitPropertySetterAttribute___ObjInit_1(UXImplicitPropertySetterAttribute* __this, ::uString* type)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Type = type;
}

UXImplicitPropertySetterAttribute* UXImplicitPropertySetterAttribute__New_1(::uStatic* __this, ::uString* type)
{
    UXImplicitPropertySetterAttribute* inst = (UXImplicitPropertySetterAttribute*)::uAllocObject(sizeof(UXImplicitPropertySetterAttribute), UXImplicitPropertySetterAttribute__typeof());
    inst->_ObjInit_1(type);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXLineNumberAttribute__uType* UXLineNumberAttribute__typeof()
{
    static ::uStaticStrong<UXLineNumberAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXLineNumberAttribute__uType*)::uAllocClassType(sizeof(UXLineNumberAttribute__uType), "Uno.UX.UXLineNumberAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void UXLineNumberAttribute___ObjInit_1(UXLineNumberAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXLineNumberAttribute* UXLineNumberAttribute__New_1(::uStatic* __this)
{
    UXLineNumberAttribute* inst = (UXLineNumberAttribute*)::uAllocObject(sizeof(UXLineNumberAttribute), UXLineNumberAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXNameAttribute__uType* UXNameAttribute__typeof()
{
    static ::uStaticStrong<UXNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXNameAttribute__uType*)::uAllocClassType(sizeof(UXNameAttribute__uType), "Uno.UX.UXNameAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void UXNameAttribute___ObjInit_1(UXNameAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXNameAttribute* UXNameAttribute__New_1(::uStatic* __this)
{
    UXNameAttribute* inst = (UXNameAttribute*)::uAllocObject(sizeof(UXNameAttribute), UXNameAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXParameterAttribute__uType* UXParameterAttribute__typeof()
{
    static ::uStaticStrong<UXParameterAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXParameterAttribute__uType*)::uAllocClassType(sizeof(UXParameterAttribute__uType), "Uno.UX.UXParameterAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Name", offsetof(UXParameterAttribute, Name));

    return type;
}

void UXParameterAttribute___ObjInit_1(UXParameterAttribute* __this, ::uString* name)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Name = name;
}

UXParameterAttribute* UXParameterAttribute__New_1(::uStatic* __this, ::uString* name)
{
    UXParameterAttribute* inst = (UXParameterAttribute*)::uAllocObject(sizeof(UXParameterAttribute), UXParameterAttribute__typeof());
    inst->_ObjInit_1(name);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXPrimaryAttribute__uType* UXPrimaryAttribute__typeof()
{
    static ::uStaticStrong<UXPrimaryAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXPrimaryAttribute__uType*)::uAllocClassType(sizeof(UXPrimaryAttribute__uType), "Uno.UX.UXPrimaryAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void UXPrimaryAttribute___ObjInit_1(UXPrimaryAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXPrimaryAttribute* UXPrimaryAttribute__New_1(::uStatic* __this)
{
    UXPrimaryAttribute* inst = (UXPrimaryAttribute*)::uAllocObject(sizeof(UXPrimaryAttribute), UXPrimaryAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXSourceFileNameAttribute__uType* UXSourceFileNameAttribute__typeof()
{
    static ::uStaticStrong<UXSourceFileNameAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXSourceFileNameAttribute__uType*)::uAllocClassType(sizeof(UXSourceFileNameAttribute__uType), "Uno.UX.UXSourceFileNameAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void UXSourceFileNameAttribute___ObjInit_1(UXSourceFileNameAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXSourceFileNameAttribute* UXSourceFileNameAttribute__New_1(::uStatic* __this)
{
    UXSourceFileNameAttribute* inst = (UXSourceFileNameAttribute*)::uAllocObject(sizeof(UXSourceFileNameAttribute), UXSourceFileNameAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXStyleListAttribute__uType* UXStyleListAttribute__typeof()
{
    static ::uStaticStrong<UXStyleListAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXStyleListAttribute__uType*)::uAllocClassType(sizeof(UXStyleListAttribute__uType), "Uno.UX.UXStyleListAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "AddMethod", offsetof(UXStyleListAttribute, AddMethod));

    return type;
}

void UXStyleListAttribute___ObjInit_1(UXStyleListAttribute* __this, ::uString* addMethod)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->AddMethod = addMethod;
}

UXStyleListAttribute* UXStyleListAttribute__New_1(::uStatic* __this, ::uString* addMethod)
{
    UXStyleListAttribute* inst = (UXStyleListAttribute*)::uAllocObject(sizeof(UXStyleListAttribute), UXStyleListAttribute__typeof());
    inst->_ObjInit_1(addMethod);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXValueBindingAliasAttribute__uType* UXValueBindingAliasAttribute__typeof()
{
    static ::uStaticStrong<UXValueBindingAliasAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXValueBindingAliasAttribute__uType*)::uAllocClassType(sizeof(UXValueBindingAliasAttribute__uType), "Uno.UX.UXValueBindingAliasAttribute", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "Alias", offsetof(UXValueBindingAliasAttribute, Alias));

    return type;
}

void UXValueBindingAliasAttribute___ObjInit_1(UXValueBindingAliasAttribute* __this, ::uString* alias)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->Alias = alias;
}

UXValueBindingAliasAttribute* UXValueBindingAliasAttribute__New_1(::uStatic* __this, ::uString* alias)
{
    UXValueBindingAliasAttribute* inst = (UXValueBindingAliasAttribute*)::uAllocObject(sizeof(UXValueBindingAliasAttribute), UXValueBindingAliasAttribute__typeof());
    inst->_ObjInit_1(alias);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXValueBindingArgumentAttribute__uType* UXValueBindingArgumentAttribute__typeof()
{
    static ::uStaticStrong<UXValueBindingArgumentAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXValueBindingArgumentAttribute__uType*)::uAllocClassType(sizeof(UXValueBindingArgumentAttribute__uType), "Uno.UX.UXValueBindingArgumentAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void UXValueBindingArgumentAttribute___ObjInit_1(UXValueBindingArgumentAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

UXValueBindingArgumentAttribute* UXValueBindingArgumentAttribute__New_1(::uStatic* __this)
{
    UXValueBindingArgumentAttribute* inst = (UXValueBindingArgumentAttribute*)::uAllocObject(sizeof(UXValueBindingArgumentAttribute), UXValueBindingArgumentAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/Attributes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UXValueChangedEventAttribute__uType* UXValueChangedEventAttribute__typeof()
{
    static ::uStaticStrong<UXValueChangedEventAttribute__uType*> type;
    if (type != NULL) return type;

    type = (UXValueChangedEventAttribute__uType*)::uAllocClassType(sizeof(UXValueChangedEventAttribute__uType), "Uno.UX.UXValueChangedEventAttribute", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    type->SetStrongRefs(
        "EventName", offsetof(UXValueChangedEventAttribute, EventName),
        "OriginSetterName", offsetof(UXValueChangedEventAttribute, OriginSetterName));

    return type;
}

void UXValueChangedEventAttribute___ObjInit_1(UXValueChangedEventAttribute* __this, ::uString* originSetterName, ::uString* eventName)
{
    ::app::Uno::Attribute___ObjInit(__this);
    __this->OriginSetterName = originSetterName;
    __this->EventName = eventName;
}

UXValueChangedEventAttribute* UXValueChangedEventAttribute__New_1(::uStatic* __this, ::uString* originSetterName, ::uString* eventName)
{
    UXValueChangedEventAttribute* inst = (UXValueChangedEventAttribute*)::uAllocObject(sizeof(UXValueChangedEventAttribute), UXValueChangedEventAttribute__typeof());
    inst->_ObjInit_1(originSetterName, eventName);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<bool>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__bool__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__double__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<double>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__double__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<float>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<Fuse.Resources.ImageSource>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ValueChangedHandler__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.UX.ValueChangedHandler<string>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::UX::ValueChangedArgs__string__typeof());

    return type;
}

}}}
