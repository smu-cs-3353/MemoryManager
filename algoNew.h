//
// Created by mark on 1/23/20.
//
#include <cstddef>

#ifndef MEMORYMANAGER_ALGONEW_H
#define MEMORYMANAGER_ALGONEW_H
void* operator new(size_t val);
void operator delete(void* ptr) noexcept;
#endif //MEMORYMANAGER_ALGONEW_H
