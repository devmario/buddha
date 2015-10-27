#include <app/Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute.h>

namespace app {
namespace Uno {
namespace Compiler {
namespace ShaderGenerator {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Compiler/ShaderGenerator/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShaderStageInlineAttribute__uType* ShaderStageInlineAttribute__typeof()
{
    static ::uStaticStrong<ShaderStageInlineAttribute__uType*> type;
    if (type != NULL) return type;

    type = (ShaderStageInlineAttribute__uType*)::uAllocClassType(sizeof(ShaderStageInlineAttribute__uType), "Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void ShaderStageInlineAttribute___ObjInit_1(ShaderStageInlineAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

ShaderStageInlineAttribute* ShaderStageInlineAttribute__New_1(::uStatic* __this)
{
    ShaderStageInlineAttribute* inst = (ShaderStageInlineAttribute*)::uAllocObject(sizeof(ShaderStageInlineAttribute), ShaderStageInlineAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}}}
