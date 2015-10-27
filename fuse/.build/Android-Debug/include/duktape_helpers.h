#ifndef DUKTAPE_HELPERS_H
#define DUKTAPE_HELPERS_H

#include <Uno/Uno.h>
#include "duktape.h"
#include <app/Uno.IntPtr.h>

duk_ret_t callback_proxy(duk_context * ctx)
{
	duk_push_global_stash(ctx);
	duk_get_prop_string(ctx, duk_get_top(ctx) - 1, "__delegate__");
	void * delegatePtr = duk_get_pointer(ctx, duk_get_top(ctx) - 1);
	duk_pop_2(ctx);

	uDelegate* del = (::uDelegate*)delegatePtr;
	del->InvokeVoid< void*>(ctx);

	/*  1 = return value at top
     *  0 = return 'undefined'
     * <0 = throw error (use DUK_RET_xxx constants)
     */

	return 1;
}

void push_delegate(duk_context * ctx, ::uDelegate * delegate)
{
	duk_push_global_stash(ctx);
	duk_push_pointer(ctx, (void*)delegate);
	duk_put_prop_string(ctx, duk_get_top(ctx) - 2, "__delegate__");
	duk_pop(ctx);
}

duk_idx_t push_callback_proxy(duk_context * ctx, int argc)
{
	return duk_push_c_function(ctx, callback_proxy, argc);
}



#endif
