#include <app/Fuse.Behavior.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Action__Fuse_Behavior.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Effects_Effect.h>
#include <app/Uno.Action__Fuse_Entities_Entity.h>
#include <app/Uno.Action__Fuse_Layouts_Column.h>
#include <app/Uno.Action__Fuse_Layouts_Row.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Resources_ImageSource.h>
#include <app/Uno.Action__Fuse_Style.h>
#include <app/Uno.Action__Fuse_Transform.h>
#include <app/Uno.Action__Uno_UX_FileSource.h>
#include <app/Uno.Action__Uno_UX_IFactory.h>
#include <app/Uno.Action__Uno_UX_ITemplate.h>
#include <app/Uno.Action__Uno_UX_Resource.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List__Fuse_Behavior.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List__Fuse_Style.h>
#include <app/Uno.Collections.List__Fuse_Transform.h>
#include <app/Uno.Collections.List__Uno_UX_FileSource.h>
#include <app/Uno.Collections.List__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List__Uno_UX_Resource.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Style.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Transform.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_IFactory.h>
#include <app/Uno.Collections.ObservableList__Fuse_Behavior.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ObservableList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ObservableList__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ObservableList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.ObservableList__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.ObservableList__Fuse_Node.h>
#include <app/Uno.Collections.ObservableList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.ObservableList__Fuse_Style.h>
#include <app/Uno.Collections.ObservableList__Fuse_Transform.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_FileSource.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_IFactory.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ObservableList__Uno_UX_Resource.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Behavior__uType* ObservableList__Fuse_Behavior__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Behavior__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Behavior__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Behavior__uType), "Uno.Collections.ObservableList<Fuse.Behavior>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Behavior*(*)(void*, int))ObservableList__Fuse_Behavior__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Behavior*))ObservableList__Fuse_Behavior__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Behavior*))ObservableList__Fuse_Behavior__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Behavior__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Behavior__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Behavior__typeof(), offsetof(ObservableList__Fuse_Behavior__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Behavior__typeof(), offsetof(ObservableList__Fuse_Behavior__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Behavior__typeof(), offsetof(ObservableList__Fuse_Behavior__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Behavior, added),
        "items", offsetof(ObservableList__Fuse_Behavior, items),
        "removed", offsetof(ObservableList__Fuse_Behavior, removed));

    return type;
}

void ObservableList__Fuse_Behavior___ObjInit(ObservableList__Fuse_Behavior* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Behavior__Add(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Behavior__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Behavior*>(item);
}

int ObservableList__Fuse_Behavior__get_Count(ObservableList__Fuse_Behavior* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Count() : 0;
}

::app::Fuse::Behavior* ObservableList__Fuse_Behavior__get_Item(ObservableList__Fuse_Behavior* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Behavior__GetEnumerator(ObservableList__Fuse_Behavior* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Behavior__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Behavior__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->GetEnumerator());
}

ObservableList__Fuse_Behavior* ObservableList__Fuse_Behavior__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Behavior* inst = (ObservableList__Fuse_Behavior*)::uAllocObject(sizeof(ObservableList__Fuse_Behavior), ObservableList__Fuse_Behavior__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Behavior__Remove(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Behavior*>(item);
    }

    return res;
}

void ObservableList__Fuse_Behavior__RemoveAt(ObservableList__Fuse_Behavior* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->items)->Item(index));
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Drawing_Brush__uType* ObservableList__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Drawing_Brush__uType), "Uno.Collections.ObservableList<Fuse.Drawing.Brush>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Drawing::Brush*(*)(void*, int))ObservableList__Fuse_Drawing_Brush__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Drawing_Brush__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Brush*))ObservableList__Fuse_Drawing_Brush__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Drawing::Brush*))ObservableList__Fuse_Drawing_Brush__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Drawing_Brush__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Drawing_Brush__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Drawing_Brush__typeof(), offsetof(ObservableList__Fuse_Drawing_Brush__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush__typeof(), offsetof(ObservableList__Fuse_Drawing_Brush__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush__typeof(), offsetof(ObservableList__Fuse_Drawing_Brush__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Drawing_Brush, added),
        "items", offsetof(ObservableList__Fuse_Drawing_Brush, items),
        "removed", offsetof(ObservableList__Fuse_Drawing_Brush, removed));

    return type;
}

void ObservableList__Fuse_Drawing_Brush___ObjInit(ObservableList__Fuse_Drawing_Brush* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Drawing_Brush__Add(ObservableList__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Brush__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(item);
}

void ObservableList__Fuse_Drawing_Brush__Clear(ObservableList__Fuse_Drawing_Brush* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Drawing_Brush* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Drawing::Brush* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(i);
        }
    }
}

int ObservableList__Fuse_Drawing_Brush__get_Count(ObservableList__Fuse_Drawing_Brush* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Count() : 0;
}

::app::Fuse::Drawing::Brush* ObservableList__Fuse_Drawing_Brush__get_Item(ObservableList__Fuse_Drawing_Brush* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Drawing_Brush__GetEnumerator(ObservableList__Fuse_Drawing_Brush* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Brush__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->GetEnumerator());
}

ObservableList__Fuse_Drawing_Brush* ObservableList__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Drawing_Brush* inst = (ObservableList__Fuse_Drawing_Brush*)::uAllocObject(sizeof(ObservableList__Fuse_Drawing_Brush), ObservableList__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Drawing_Brush__Remove(ObservableList__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Brush*>(item);
    }

    return res;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Drawing_Stroke__uType* ObservableList__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Drawing_Stroke__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Drawing_Stroke__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Drawing_Stroke__uType), "Uno.Collections.ObservableList<Fuse.Drawing.Stroke>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Drawing::Stroke*(*)(void*, int))ObservableList__Fuse_Drawing_Stroke__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Drawing_Stroke__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Stroke*))ObservableList__Fuse_Drawing_Stroke__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Drawing::Stroke*))ObservableList__Fuse_Drawing_Stroke__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Drawing_Stroke__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Drawing_Stroke__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Drawing_Stroke__typeof(), offsetof(ObservableList__Fuse_Drawing_Stroke__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke__typeof(), offsetof(ObservableList__Fuse_Drawing_Stroke__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke__typeof(), offsetof(ObservableList__Fuse_Drawing_Stroke__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Drawing_Stroke, added),
        "items", offsetof(ObservableList__Fuse_Drawing_Stroke, items),
        "removed", offsetof(ObservableList__Fuse_Drawing_Stroke, removed));

    return type;
}

void ObservableList__Fuse_Drawing_Stroke___ObjInit(ObservableList__Fuse_Drawing_Stroke* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Drawing_Stroke__Add(ObservableList__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Stroke__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(item);
}

void ObservableList__Fuse_Drawing_Stroke__Clear(ObservableList__Fuse_Drawing_Stroke* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Drawing_Stroke* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Drawing::Stroke* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(i);
        }
    }
}

int ObservableList__Fuse_Drawing_Stroke__get_Count(ObservableList__Fuse_Drawing_Stroke* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Count() : 0;
}

::app::Fuse::Drawing::Stroke* ObservableList__Fuse_Drawing_Stroke__get_Item(ObservableList__Fuse_Drawing_Stroke* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Drawing_Stroke__GetEnumerator(ObservableList__Fuse_Drawing_Stroke* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Drawing_Stroke__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->GetEnumerator());
}

ObservableList__Fuse_Drawing_Stroke* ObservableList__Fuse_Drawing_Stroke__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Drawing_Stroke* inst = (ObservableList__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(ObservableList__Fuse_Drawing_Stroke), ObservableList__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Drawing_Stroke__Remove(ObservableList__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Drawing::Stroke*>(item);
    }

    return res;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Effects_Effect__uType* ObservableList__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Effects_Effect__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Effects_Effect__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Effects_Effect__uType), "Uno.Collections.ObservableList<Fuse.Effects.Effect>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Effects::Effect*(*)(void*, int))ObservableList__Fuse_Effects_Effect__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Effects::Effect*))ObservableList__Fuse_Effects_Effect__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Effects_Effect__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Effects_Effect__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Effects_Effect__typeof(), offsetof(ObservableList__Fuse_Effects_Effect__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Effects_Effect__typeof(), offsetof(ObservableList__Fuse_Effects_Effect__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect__typeof(), offsetof(ObservableList__Fuse_Effects_Effect__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Effects_Effect, added),
        "items", offsetof(ObservableList__Fuse_Effects_Effect, items),
        "removed", offsetof(ObservableList__Fuse_Effects_Effect, removed));

    return type;
}

void ObservableList__Fuse_Effects_Effect___ObjInit(ObservableList__Fuse_Effects_Effect* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Effects_Effect__Add(ObservableList__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Effects_Effect__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Effects::Effect*>(item);
}

int ObservableList__Fuse_Effects_Effect__get_Count(ObservableList__Fuse_Effects_Effect* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Count() : 0;
}

::app::Fuse::Effects::Effect* ObservableList__Fuse_Effects_Effect__get_Item(ObservableList__Fuse_Effects_Effect* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Effects_Effect__GetEnumerator(ObservableList__Fuse_Effects_Effect* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Effects_Effect__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->GetEnumerator());
}

ObservableList__Fuse_Effects_Effect* ObservableList__Fuse_Effects_Effect__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Effects_Effect* inst = (ObservableList__Fuse_Effects_Effect*)::uAllocObject(sizeof(ObservableList__Fuse_Effects_Effect), ObservableList__Fuse_Effects_Effect__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Effects_Effect__Remove(ObservableList__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Effects::Effect*>(item);
    }

    return res;
}

void ObservableList__Fuse_Effects_Effect__RemoveAt(ObservableList__Fuse_Effects_Effect* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->items)->Item(index));
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Entities_Entity__uType* ObservableList__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Entities_Entity__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Entities_Entity__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Entities_Entity__uType), "Uno.Collections.ObservableList<Fuse.Entities.Entity>", false, 2, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Entities::Entity*(*)(void*, int))ObservableList__Fuse_Entities_Entity__get_Item;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Entities_Entity__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Entities_Entity__typeof(), offsetof(ObservableList__Fuse_Entities_Entity__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Entities_Entity__typeof(), offsetof(ObservableList__Fuse_Entities_Entity__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Entities_Entity, added),
        "items", offsetof(ObservableList__Fuse_Entities_Entity, items),
        "removed", offsetof(ObservableList__Fuse_Entities_Entity, removed));

    return type;
}

void ObservableList__Fuse_Entities_Entity___ObjInit(ObservableList__Fuse_Entities_Entity* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

int ObservableList__Fuse_Entities_Entity__get_Count(ObservableList__Fuse_Entities_Entity* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Count() : 0;
}

::app::Fuse::Entities::Entity* ObservableList__Fuse_Entities_Entity__get_Item(ObservableList__Fuse_Entities_Entity* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->items)->Item(index);
}

ObservableList__Fuse_Entities_Entity* ObservableList__Fuse_Entities_Entity__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Entities_Entity* inst = (ObservableList__Fuse_Entities_Entity*)::uAllocObject(sizeof(ObservableList__Fuse_Entities_Entity), ObservableList__Fuse_Entities_Entity__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Layouts_Column__uType* ObservableList__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Layouts_Column__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Layouts_Column__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Layouts_Column__uType), "Uno.Collections.ObservableList<Fuse.Layouts.Column>", false, 2, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Layouts::Column*(*)(void*, int))ObservableList__Fuse_Layouts_Column__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Layouts_Column__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Layouts::Column*))ObservableList__Fuse_Layouts_Column__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Layouts_Column__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Layouts_Column__typeof(), offsetof(ObservableList__Fuse_Layouts_Column__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Column__typeof(), offsetof(ObservableList__Fuse_Layouts_Column__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Layouts_Column, added),
        "items", offsetof(ObservableList__Fuse_Layouts_Column, items),
        "removed", offsetof(ObservableList__Fuse_Layouts_Column, removed));

    return type;
}

void ObservableList__Fuse_Layouts_Column___ObjInit(ObservableList__Fuse_Layouts_Column* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Layouts_Column__Add(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Layouts_Column__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Layouts::Column*>(item);
}

void ObservableList__Fuse_Layouts_Column__Clear(ObservableList__Fuse_Layouts_Column* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Layouts_Column* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Column enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Layouts::Column* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Layouts::Column*>(i);
        }
    }
}

int ObservableList__Fuse_Layouts_Column__get_Count(ObservableList__Fuse_Layouts_Column* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Count() : 0;
}

::app::Fuse::Layouts::Column* ObservableList__Fuse_Layouts_Column__get_Item(ObservableList__Fuse_Layouts_Column* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->items)->Item(index);
}

ObservableList__Fuse_Layouts_Column* ObservableList__Fuse_Layouts_Column__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Layouts_Column* inst = (ObservableList__Fuse_Layouts_Column*)::uAllocObject(sizeof(ObservableList__Fuse_Layouts_Column), ObservableList__Fuse_Layouts_Column__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Layouts_Row__uType* ObservableList__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Layouts_Row__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Layouts_Row__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Layouts_Row__uType), "Uno.Collections.ObservableList<Fuse.Layouts.Row>", false, 2, 3, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Layouts::Row*(*)(void*, int))ObservableList__Fuse_Layouts_Row__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))ObservableList__Fuse_Layouts_Row__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Layouts::Row*))ObservableList__Fuse_Layouts_Row__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Layouts_Row__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof(), offsetof(ObservableList__Fuse_Layouts_Row__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Row__typeof(), offsetof(ObservableList__Fuse_Layouts_Row__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Layouts_Row, added),
        "items", offsetof(ObservableList__Fuse_Layouts_Row, items),
        "removed", offsetof(ObservableList__Fuse_Layouts_Row, removed));

    return type;
}

void ObservableList__Fuse_Layouts_Row___ObjInit(ObservableList__Fuse_Layouts_Row* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Layouts_Row__Add(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Layouts_Row__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Layouts::Row*>(item);
}

void ObservableList__Fuse_Layouts_Row__Clear(ObservableList__Fuse_Layouts_Row* __this)
{
    if (__this->items != NULL)
    {
        ::app::Uno::Collections::List__Fuse_Layouts_Row* removedItems = __this->items;
        __this->items = NULL;

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Row enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(removedItems)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::app::Fuse::Layouts::Row* i = enum_123.Current();
            ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Layouts::Row*>(i);
        }
    }
}

int ObservableList__Fuse_Layouts_Row__get_Count(ObservableList__Fuse_Layouts_Row* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Count() : 0;
}

::app::Fuse::Layouts::Row* ObservableList__Fuse_Layouts_Row__get_Item(ObservableList__Fuse_Layouts_Row* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->items)->Item(index);
}

ObservableList__Fuse_Layouts_Row* ObservableList__Fuse_Layouts_Row__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Layouts_Row* inst = (ObservableList__Fuse_Layouts_Row*)::uAllocObject(sizeof(ObservableList__Fuse_Layouts_Row), ObservableList__Fuse_Layouts_Row__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Node__uType* ObservableList__Fuse_Node__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Node__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Node__uType), "Uno.Collections.ObservableList<Fuse.Node>", false, 3, 3, 0);

    type->__interface_0.__fp_Insert = (void(*)(void*, int, ::app::Fuse::Node*))ObservableList__Fuse_Node__Insert;
    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Fuse_Node__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Node*(*)(void*, int))ObservableList__Fuse_Node__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Node*))ObservableList__Fuse_Node__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Node*))ObservableList__Fuse_Node__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Node__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Node__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Node__typeof(), offsetof(ObservableList__Fuse_Node__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Node__typeof(), offsetof(ObservableList__Fuse_Node__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Node__typeof(), offsetof(ObservableList__Fuse_Node__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Node, added),
        "items", offsetof(ObservableList__Fuse_Node, items),
        "removed", offsetof(ObservableList__Fuse_Node, removed));

    return type;
}

void ObservableList__Fuse_Node___ObjInit(ObservableList__Fuse_Node* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Node__Add(ObservableList__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Node*>(item);
}

int ObservableList__Fuse_Node__get_Count(ObservableList__Fuse_Node* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Count() : 0;
}

::app::Fuse::Node* ObservableList__Fuse_Node__get_Item(ObservableList__Fuse_Node* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Node__GetEnumerator(ObservableList__Fuse_Node* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Node__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->GetEnumerator());
}

void ObservableList__Fuse_Node__Insert(ObservableList__Fuse_Node* __this, int index, ::app::Fuse::Node* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Insert(index, item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Node*>(item);
}

ObservableList__Fuse_Node* ObservableList__Fuse_Node__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Node* inst = (ObservableList__Fuse_Node*)::uAllocObject(sizeof(ObservableList__Fuse_Node), ObservableList__Fuse_Node__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Node__Remove(ObservableList__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Node*>(item);
    }

    return res;
}

void ObservableList__Fuse_Node__RemoveAt(ObservableList__Fuse_Node* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->items)->Item(index));
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Resources_ImageSource__uType* ObservableList__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Resources_ImageSource__uType), "Uno.Collections.ObservableList<Fuse.Resources.ImageSource>", false, 3, 3, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Resources::ImageSource*))ObservableList__Fuse_Resources_ImageSource__Add;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Resources_ImageSource__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Resources_ImageSource__typeof(), offsetof(ObservableList__Fuse_Resources_ImageSource__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource__typeof(), offsetof(ObservableList__Fuse_Resources_ImageSource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource__typeof(), offsetof(ObservableList__Fuse_Resources_ImageSource__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Resources_ImageSource, added),
        "items", offsetof(ObservableList__Fuse_Resources_ImageSource, items),
        "removed", offsetof(ObservableList__Fuse_Resources_ImageSource, removed));

    return type;
}

void ObservableList__Fuse_Resources_ImageSource___ObjInit(ObservableList__Fuse_Resources_ImageSource* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Resources_ImageSource__Add(ObservableList__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Resources_ImageSource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Resources::ImageSource*>(item);
}

::uObject* ObservableList__Fuse_Resources_ImageSource__GetEnumerator(ObservableList__Fuse_Resources_ImageSource* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Resources_ImageSource__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->items)->GetEnumerator());
}

ObservableList__Fuse_Resources_ImageSource* ObservableList__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Resources_ImageSource* inst = (ObservableList__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(ObservableList__Fuse_Resources_ImageSource), ObservableList__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Style__uType* ObservableList__Fuse_Style__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Style__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Style__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Style__uType), "Uno.Collections.ObservableList<Fuse.Style>", false, 3, 3, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Fuse_Style__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Style*(*)(void*, int))ObservableList__Fuse_Style__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Style*))ObservableList__Fuse_Style__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Style*))ObservableList__Fuse_Style__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Fuse_Style__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Style__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Style__typeof(), offsetof(ObservableList__Fuse_Style__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Style__typeof(), offsetof(ObservableList__Fuse_Style__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Style__typeof(), offsetof(ObservableList__Fuse_Style__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Style, added),
        "items", offsetof(ObservableList__Fuse_Style, items),
        "removed", offsetof(ObservableList__Fuse_Style, removed));

    return type;
}

void ObservableList__Fuse_Style___ObjInit(ObservableList__Fuse_Style* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Style__Add(ObservableList__Fuse_Style* __this, ::app::Fuse::Style* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Style__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Style*>(item);
}

int ObservableList__Fuse_Style__get_Count(ObservableList__Fuse_Style* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Count() : 0;
}

::app::Fuse::Style* ObservableList__Fuse_Style__get_Item(ObservableList__Fuse_Style* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Style__GetEnumerator(ObservableList__Fuse_Style* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Style__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Style__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->GetEnumerator());
}

ObservableList__Fuse_Style* ObservableList__Fuse_Style__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Style* inst = (ObservableList__Fuse_Style*)::uAllocObject(sizeof(ObservableList__Fuse_Style), ObservableList__Fuse_Style__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Style__Remove(ObservableList__Fuse_Style* __this, ::app::Fuse::Style* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Style*>(item);
    }

    return res;
}

void ObservableList__Fuse_Style__RemoveAt(ObservableList__Fuse_Style* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->items)->Item(index));
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Fuse_Transform__uType* ObservableList__Fuse_Transform__typeof()
{
    static ::uStaticStrong<ObservableList__Fuse_Transform__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Fuse_Transform__uType*)::uAllocClassType(sizeof(ObservableList__Fuse_Transform__uType), "Uno.Collections.ObservableList<Fuse.Transform>", false, 3, 3, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Transform*))ObservableList__Fuse_Transform__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Transform*))ObservableList__Fuse_Transform__Remove;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Fuse_Transform__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Transform__typeof(), offsetof(ObservableList__Fuse_Transform__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Transform__typeof(), offsetof(ObservableList__Fuse_Transform__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Transform__typeof(), offsetof(ObservableList__Fuse_Transform__uType, __interface_2));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Fuse_Transform, added),
        "items", offsetof(ObservableList__Fuse_Transform, items),
        "removed", offsetof(ObservableList__Fuse_Transform, removed));

    return type;
}

void ObservableList__Fuse_Transform___ObjInit(ObservableList__Fuse_Transform* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Fuse_Transform__Add(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Transform__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Fuse::Transform*>(item);
}

int ObservableList__Fuse_Transform__get_Count(ObservableList__Fuse_Transform* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Count() : 0;
}

::app::Fuse::Transform* ObservableList__Fuse_Transform__get_Item(ObservableList__Fuse_Transform* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Item(index);
}

::uObject* ObservableList__Fuse_Transform__GetEnumerator(ObservableList__Fuse_Transform* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Fuse_Transform__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Transform__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->GetEnumerator());
}

ObservableList__Fuse_Transform* ObservableList__Fuse_Transform__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Fuse_Transform* inst = (ObservableList__Fuse_Transform*)::uAllocObject(sizeof(ObservableList__Fuse_Transform), ObservableList__Fuse_Transform__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Fuse_Transform__Remove(ObservableList__Fuse_Transform* __this, ::app::Fuse::Transform* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Fuse::Transform*>(item);
    }

    return res;
}

void ObservableList__Fuse_Transform__RemoveAt(ObservableList__Fuse_Transform* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->items)->Item(index));
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Uno_UX_FileSource__uType* ObservableList__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<ObservableList__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(ObservableList__Uno_UX_FileSource__uType), "Uno.Collections.ObservableList<Uno.UX.FileSource>", false, 2, 3, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::UX::FileSource*))ObservableList__Uno_UX_FileSource__Add;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_FileSource__typeof(), offsetof(ObservableList__Uno_UX_FileSource__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_UX_FileSource__typeof(), offsetof(ObservableList__Uno_UX_FileSource__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Uno_UX_FileSource, added),
        "items", offsetof(ObservableList__Uno_UX_FileSource, items),
        "removed", offsetof(ObservableList__Uno_UX_FileSource, removed));

    return type;
}

void ObservableList__Uno_UX_FileSource___ObjInit(ObservableList__Uno_UX_FileSource* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Uno_UX_FileSource__Add(ObservableList__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_FileSource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Uno::UX::FileSource*>(item);
}

int ObservableList__Uno_UX_FileSource__get_Count(ObservableList__Uno_UX_FileSource* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Count() : 0;
}

::app::Uno::UX::FileSource* ObservableList__Uno_UX_FileSource__get_Item(ObservableList__Uno_UX_FileSource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->Item(index);
}

::uObject* ObservableList__Uno_UX_FileSource__GetEnumerator(ObservableList__Uno_UX_FileSource* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_FileSource__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource__typeof(), ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->items)->GetEnumerator());
}

ObservableList__Uno_UX_FileSource* ObservableList__Uno_UX_FileSource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Uno_UX_FileSource* inst = (ObservableList__Uno_UX_FileSource*)::uAllocObject(sizeof(ObservableList__Uno_UX_FileSource), ObservableList__Uno_UX_FileSource__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Uno_UX_IFactory__uType* ObservableList__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong<ObservableList__Uno_UX_IFactory__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Uno_UX_IFactory__uType*)::uAllocClassType(sizeof(ObservableList__Uno_UX_IFactory__uType), "Uno.Collections.ObservableList<Uno.UX.IFactory>", false, 2, 3, 0);

    type->__interface_1.__fp_GetEnumerator = (::uObject*(*)(void*))ObservableList__Uno_UX_IFactory__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_IFactory__typeof(), offsetof(ObservableList__Uno_UX_IFactory__uType, __interface_0),
        ::app::Uno::Collections::IEnumerable__Uno_UX_IFactory__typeof(), offsetof(ObservableList__Uno_UX_IFactory__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Uno_UX_IFactory, added),
        "items", offsetof(ObservableList__Uno_UX_IFactory, items),
        "removed", offsetof(ObservableList__Uno_UX_IFactory, removed));

    return type;
}

void ObservableList__Uno_UX_IFactory___ObjInit(ObservableList__Uno_UX_IFactory* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

::uObject* ObservableList__Uno_UX_IFactory__GetEnumerator(ObservableList__Uno_UX_IFactory* __this)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_IFactory__New_1(NULL);
    }

    return ::uBox(::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory__typeof(), ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->items)->GetEnumerator());
}

ObservableList__Uno_UX_IFactory* ObservableList__Uno_UX_IFactory__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Uno_UX_IFactory* inst = (ObservableList__Uno_UX_IFactory*)::uAllocObject(sizeof(ObservableList__Uno_UX_IFactory), ObservableList__Uno_UX_IFactory__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Uno_UX_ITemplate__uType* ObservableList__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong<ObservableList__Uno_UX_ITemplate__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Uno_UX_ITemplate__uType*)::uAllocClassType(sizeof(ObservableList__Uno_UX_ITemplate__uType), "Uno.Collections.ObservableList<Uno.UX.ITemplate>", false, 2, 3, 0);

    type->__interface_0.__fp_get_Item = (::uObject*(*)(void*, int))ObservableList__Uno_UX_ITemplate__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::uObject*))ObservableList__Uno_UX_ITemplate__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Uno_UX_ITemplate__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_ITemplate__typeof(), offsetof(ObservableList__Uno_UX_ITemplate__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_UX_ITemplate__typeof(), offsetof(ObservableList__Uno_UX_ITemplate__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Uno_UX_ITemplate, added),
        "items", offsetof(ObservableList__Uno_UX_ITemplate, items),
        "removed", offsetof(ObservableList__Uno_UX_ITemplate, removed));

    return type;
}

void ObservableList__Uno_UX_ITemplate___ObjInit(ObservableList__Uno_UX_ITemplate* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Uno_UX_ITemplate__Add(ObservableList__Uno_UX_ITemplate* __this, ::uObject* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_ITemplate__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::uObject*>(item);
}

int ObservableList__Uno_UX_ITemplate__get_Count(ObservableList__Uno_UX_ITemplate* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Count() : 0;
}

::uObject* ObservableList__Uno_UX_ITemplate__get_Item(ObservableList__Uno_UX_ITemplate* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_ITemplate*>(__this->items)->Item(index);
}

ObservableList__Uno_UX_ITemplate* ObservableList__Uno_UX_ITemplate__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Uno_UX_ITemplate* inst = (ObservableList__Uno_UX_ITemplate*)::uAllocObject(sizeof(ObservableList__Uno_UX_ITemplate), ObservableList__Uno_UX_ITemplate__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObservableList__Uno_UX_Resource__uType* ObservableList__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong<ObservableList__Uno_UX_Resource__uType*> type;
    if (type != NULL) return type;

    type = (ObservableList__Uno_UX_Resource__uType*)::uAllocClassType(sizeof(ObservableList__Uno_UX_Resource__uType), "Uno.Collections.ObservableList<Uno.UX.Resource>", false, 2, 3, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))ObservableList__Uno_UX_Resource__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Uno::UX::Resource*(*)(void*, int))ObservableList__Uno_UX_Resource__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::UX::Resource*))ObservableList__Uno_UX_Resource__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))ObservableList__Uno_UX_Resource__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_Resource__typeof(), offsetof(ObservableList__Uno_UX_Resource__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_UX_Resource__typeof(), offsetof(ObservableList__Uno_UX_Resource__uType, __interface_1));

    type->SetStrongRefs(
        "added", offsetof(ObservableList__Uno_UX_Resource, added),
        "items", offsetof(ObservableList__Uno_UX_Resource, items),
        "removed", offsetof(ObservableList__Uno_UX_Resource, removed));

    return type;
}

void ObservableList__Uno_UX_Resource___ObjInit(ObservableList__Uno_UX_Resource* __this, ::uDelegate* added, ::uDelegate* removed)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)added, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("added")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)removed, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("removed")));
    }

    __this->added = added;
    __this->removed = removed;
}

void ObservableList__Uno_UX_Resource__Add(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    if (__this->items == NULL)
    {
        __this->items = ::app::Uno::Collections::List__Uno_UX_Resource__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Add(item);
    ::uPtr< ::uDelegate*>(__this->added)->InvokeVoid< ::app::Uno::UX::Resource*>(item);
}

int ObservableList__Uno_UX_Resource__get_Count(ObservableList__Uno_UX_Resource* __this)
{
    return (__this->items != NULL) ? ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Count() : 0;
}

::app::Uno::UX::Resource* ObservableList__Uno_UX_Resource__get_Item(ObservableList__Uno_UX_Resource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    return ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Item(index);
}

ObservableList__Uno_UX_Resource* ObservableList__Uno_UX_Resource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed)
{
    ObservableList__Uno_UX_Resource* inst = (ObservableList__Uno_UX_Resource*)::uAllocObject(sizeof(ObservableList__Uno_UX_Resource), ObservableList__Uno_UX_Resource__typeof());
    inst->_ObjInit(added, removed);
    return inst;
}

bool ObservableList__Uno_UX_Resource__Remove(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    if (__this->items == NULL)
    {
        return false;
    }

    bool res = ::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Remove(item);

    if (res)
    {
        ::uPtr< ::uDelegate*>(__this->removed)->InvokeVoid< ::app::Uno::UX::Resource*>(item);
    }

    return res;
}

void ObservableList__Uno_UX_Resource__RemoveAt(ObservableList__Uno_UX_Resource* __this, int index)
{
    if (__this->items == NULL)
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->Remove(::uPtr< ::app::Uno::Collections::List__Uno_UX_Resource*>(__this->items)->Item(index));
}

}}}
