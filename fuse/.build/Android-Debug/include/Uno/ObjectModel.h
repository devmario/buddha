// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Source/Uno/ObjectModel.h'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __UNO_OBJECT_MODEL_H__
#define __UNO_OBJECT_MODEL_H__

#include <Uno/Memory.h>
#include <cstring>
#include <cstdlib>
#include <exception>
namespace app { namespace Uno { struct Exception; } }

/**
    \addtogroup ObjectModel
    @{
*/
struct uObject
{
    uType* __obj_type;
    uWeakObject* __obj_weak;
    int __obj_retains;

#ifdef U_DEBUG_MEM
    size_t __obj_alloc_size;
    int __obj_id;
#endif

    uType* GetType();
    int GetHashCode();
    bool Equals(uObject* obj);
    uString* ToString();
};

enum uTypeType
{
    uTypeTypeVoid,
    uTypeTypeEnum,
    uTypeTypeStruct,
    uTypeTypeClass,
    uTypeTypeDelegate,
    uTypeTypeInterface,
    uTypeTypeArray,
};

struct uType : uObject
{
    size_t TypeSize;
    uTypeType TypeType;
    const char* TypeName;
    size_t ValueSize;

    uType* BaseType;
    uArrayType* ArrayType;

    int InterfaceCount;
    uInterfaceType** InterfaceTypes;
    size_t* InterfaceOffsets;

    int StrongRefCount;
    size_t* StrongRefOffsets;

    int WeakRefCount;
    size_t* WeakRefOffsets;

#ifdef U_DEBUG_MEM
    const char** StrongRefNames;
    const char** WeakRefNames;
    int ObjectCount;
#endif

    void SetBaseType(uType* baseType);
    void SetInterfaces(uInterfaceType* interfaceType, size_t offset, ...);
    void SetStrongRefs(const char* name, size_t offset, ...);
    void SetWeakRefs(const char* name, size_t offset, ...);












    

    void(*__fp_Finalize)(uObject*);
    int(*__fp_GetHashCode)(uObject*);
    bool(*__fp_Equals)(uObject*, uObject*);
    uString*(*__fp_ToString)(uObject*);
};

uClassType* uObject__typeof();
uClassType* uType__typeof();
uType* uVoid__typeof();

inline uType* uObject::GetType() { return __obj_type; }
inline int uObject::GetHashCode() { return (*__obj_type->__fp_GetHashCode)(this); }
inline bool uObject::Equals(uObject* obj) { return (*__obj_type->__fp_Equals)(this, obj); }
inline uString* uObject::ToString() { return (*__obj_type->__fp_ToString)(this); }
/** @} */

/**
    \addtogroup Exception
    @{
*/
class uThrowable : public std::exception
{
    uThrowable& operator = (const uThrowable& copy);

public:
    ::app::Uno::Exception* Exception;
    const char* Function;
    int Line;

    uThrowable(::app::Uno::Exception* exception, const char* func, int line);
    uThrowable(const uThrowable& copy);
    virtual ~uThrowable() XLI_NOEXCEPT;
    virtual const char* what() const XLI_NOEXCEPT;

    static XLI_NORETURN void ThrowIndexOutOfRange(const char* func, int line);
    static XLI_NORETURN void ThrowInvalidCast(const char* func, int line);
    static XLI_NORETURN void ThrowNullReference(const char* func, int line);
};

#define U_THROW(exception) throw ::uThrowable((exception), XLI_FUNCTION, XLI_LINE)
#define U_THROW_ICE() ::uThrowable::ThrowInvalidCast(XLI_FUNCTION, XLI_LINE)
#define U_THROW_IOORE() ::uThrowable::ThrowIndexOutOfRange(XLI_FUNCTION, XLI_LINE)
#define U_THROW_NRE() ::uThrowable::ThrowNullReference(XLI_FUNCTION, XLI_LINE)
/** @} */

/**
    \addtogroup Class
    @{
*/
struct uClassType : uType
{
};

uClassType* uAllocClassType(size_t typeSize, const char* name, bool isStatic = true,
                            int interfaceCount = 0, int strongRefCount = 0, int weakRefCount = 0);

uObject* uAllocObject(size_t objSize, uType* objType);
bool uIs(const uObject* obj, const uType* type);

template <typename T>
T uAs(uObject* obj, uType* type) { 
    return uIs(obj, type) ? (T)obj : NULL; 
}

template <typename T>
T uCast(uObject* obj, uType* type) {
    if (obj && !uIs(obj, type)) U_THROW_ICE();
    return (T)obj;
}

template <typename T>
T uPtr(T ptr) {
    if (!ptr) U_THROW_NRE();
    return ptr;
}
/** @} */

/**
    \addtogroup Interface
    @{
*/
struct uInterfaceType : uType
{
};

uInterfaceType* uAllocInterfaceType(const char* name);
void* uGetInterfacePtr(const uObject* obj, const uInterfaceType* iface);
/** @} */

/**
    \addtogroup Delegate
    @{
*/
struct uDelegateType : uType
{
    uType* ReturnType;
    int ParameterCount;
    uType** ParameterTypes;

    void SetSignature(uType* returnType, ...);
};

struct uDelegate : uObject
{
    uStrong<uDelegate*> _prev;
    const void* _func;
    uObject* _obj;
    size_t _offset;

#include <Uno/_delegate.h>
};

uDelegateType* uAllocDelegateType(const char* name, int parameterCount);
uDelegate* uNewDelegateNonVirt(uDelegateType* delegateType, const void* funcPtr, uObject* objInst = NULL, size_t objOffset = 0);
uDelegate* uNewDelegateVirt(uDelegateType* delegateType, uObject* objInst, size_t funcOffset);
uDelegate* uNewDelegateInterface(uDelegateType* delegateType, uObject* objInst, uInterfaceType* interfaceType, size_t funcOffset);
/** @} */

/**
    \addtogroup Struct
    @{
*/
struct uStructType : uType
{
    int(*__fp_GetHashCode_value)(void*);
    bool(*__fp_Equals_value)(void*, uObject*);
    uString*(*__fp_ToString_value)(void*);
};

uStructType* uAllocStructType(size_t typeSize, const char* name, size_t valueSize, 
                              int interfaceCount = 0, int strongRefCount = 0, int weakRefCount = 0);

uObject* uBoxValue(uType* type, const void* valueAddr, size_t valueSize);
void uUnboxObject(uType* type, uObject* obj, void* valueAddr, size_t valueSize);

template <typename T>
uObject* uBox(uType* type, const T& value) { return uBoxValue(type, &value, sizeof(T)); }

template <typename T>
T uUnbox(uType* type, uObject* obj) { T t; uUnboxObject(type, obj, &t, sizeof(T)); return t; }

template <typename T>
T uUnsafeUnbox(uObject* obj) { return *(const T*)((const uByte*)obj + sizeof(uObject)); }
/** @} */

/**
    \addtogroup Enum
    @{
*/
struct uEnumType : uType
{
    int LiteralCount;
    uString** LiteralStrings;
    uLong* LiteralValues;

    void SetLiterals(const char* name, uLong value, ...);
};

uEnumType* uAllocEnumType(const char* name, uStructType* baseType, int literalCount = 0);
bool uTryParseEnum(uType* type, uString* value, bool ignoreCase, void* result, size_t size);
uString* uGetEnumString(uType* type, void* value, size_t size);
/** @} */

/**
    \addtogroup Array
    @{
*/
struct uArrayType : uType
{
    uType* ElementType;
};

struct uArray : uObject
{
    void* _ptr;
    int _len;

    int Length() { return _len; }
    void* Ptr() { return _ptr; }

    template <typename T> const T& Item(int index) const {
        if (index < 0 || index >= _len) U_THROW_IOORE();
        return ((const T*)_ptr)[index];
    }
    template <typename T> T& Item(int index) {
        if (index < 0 || index >= _len) U_THROW_IOORE();
        return ((T*)_ptr)[index];
    }
    template <typename T> uStrong<T>& ItemStrong(int index) {
        if (index < 0 || index >= _len) U_THROW_IOORE();
        return ((uStrong<T>*)_ptr)[index];
    }
    template <typename T> const T& UnsafeItem(int index) const {
        return ((const T*)_ptr)[index];
    }
    template <typename T> T& UnsafeItem(int index) {
        return ((T*)_ptr)[index];
    }
    template <typename T> uStrong<T>& UnsafeItemStrong(int index) {
        return ((uStrong<T>*)_ptr)[index];
    }
};

uArrayType* uGetArrayType(uType* elementType);
uArray* uNewArray(uType* elementType, int length, const void* optionalData = NULL);
uArray* uNewArrayRetainEach(uType* elementType, int length, uObject** data);
void uCopyArray(const uArray* srcArray, int srcIndex, uArray* dstArray, int dstIndex, int length);
/** @} */

/**
    \addtogroup String
    @{
*/
struct uString : uObject
{
    uChar* _ptr;
    int _len;

    int Length() const { return _len; }
    uChar* Ptr() { return _ptr; }

    const uChar& Item(int index) const {
        if (index < 0 || index >= _len) U_THROW_IOORE();
        return _ptr[index];
    }
    const uChar& UnsafeItem(int index) const {
        return _ptr[index];
    }
};

uString* uAllocString(int length);
uString* uNewStringAnsi(const char* cstr, int length);
uString* uNewStringAnsi(const char* cstr);
uString* uNewStringUtf8(const char* mutf8, int length);
uString* uNewStringUtf8(const char* mutf8);
uString* uNewStringFromArray(const uArray* array);
uString* uGetConstString(const char* mutf8);

bool uCompareStrings(const uString* a, const uString* b, bool ignoreCase = false);

const char* uStringToCStr(const uString* str);
void uFreeCStr(const char* cstr);
/** @} */

/**
    \addtogroup Generic
    @{
*/
template <typename T>
T uDefault() { T t; memset(&t, 0, sizeof(T)); return t; }

template <typename T>
bool uGenericEquals(const T& a, const T& b) { return memcmp(&a, &b, sizeof(T)) == 0; }

template <typename T>
bool uGenericEquals(T* a, T* b) { return a == b || (a && b && ((uObject*)a)->Equals((uObject*)b)); }
/** @} */

#endif
