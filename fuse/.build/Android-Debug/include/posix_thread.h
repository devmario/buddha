#ifndef POSIX_THREAD_H
#define POSIX_THREAD_H

#include <Uno/Uno.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>


void * invoke_delegate(void * arg)
{
	::uAutoReleasePool pool;
	::uDelegate * callback = (::uDelegate*)arg;
	callback->InvokeVoid();
	return 0;
}

int thread_start(::uULong* handle, ::uDelegate * callback)
{
	pthread_t * pt = (pthread_t*)handle;
	return pthread_create(pt, NULL, invoke_delegate, (void*)callback);
}
void thread_sleep(::uULong microseconds)
{
	int result = usleep(microseconds);
}



#endif