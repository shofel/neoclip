/*
 * neoclip - Neovim clipboard provider
 * Last Change:  2020 Sep 06
 * License:      https://unlicense.org
 * URL:          https://github.com/matveyt/neoclip
 */


#ifndef NEO_X_H
#define NEO_X_H


#include <stddef.h>


// X atoms in use
enum {
    prim,
    clip,
    targets,
    utf8,
    proto,
    dele,
    neo_update,
    neo_owned,
    total
};


void* neo_X_start(void);
void neo_X_cleanup(void* X);

int neo_X_lock(void* X, int lock);
void neo_X_ready(void* X, int sel, const void* ptr, size_t cb);
void neo_X_send(void* X, int message, int param);
const void* neo_X_update(void* X, int sel, size_t* pcb);


#endif // NEO_X_H
