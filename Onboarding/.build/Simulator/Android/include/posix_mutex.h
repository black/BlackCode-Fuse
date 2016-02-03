#ifndef POSIX_MUTEX_H
#define POSIX_MUTEX_H

#include <Uno/Uno.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void * init_mutex()
{
    pthread_mutex_t * mutex = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
    memset((void*)mutex, 0, sizeof(pthread_mutex_t));

    if (pthread_mutex_init(mutex, NULL))
    {
        free(mutex);
        return (void*)0;
    }

    return (void*)mutex;
}

void free_mutex(void * mutex)
{
    free(mutex);
}

#endif