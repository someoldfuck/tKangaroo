#ifndef HASH160_H
#define HASH160_H

#include <stddef.h>
#include <stdint.h>

void Hash160(const uint8_t *data, size_t len, uint8_t out[20]);

#endif // HASH160_H
