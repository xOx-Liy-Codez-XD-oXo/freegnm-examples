#ifndef _DISPLAYCTX_H_
#define _DISPLAYCTX_H_

#include <orbis/libkernel.h>

#include <gnm/rendertarget.h>

typedef struct {
	int videohandle;
	OrbisKernelEqueue flipqueue;
} DisplayContext;

bool displayctx_init(DisplayContext* ctx, GnmRenderTarget* rt);
bool displayctx_flip(DisplayContext* ctx);
void displayctx_destroy(DisplayContext* ctx);

#endif	// _DISPLAYCTX_H_
