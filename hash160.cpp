#include "hash160.h"
#include <openssl/sha.h>
#include <openssl/ripemd.h>

void Hash160(const uint8_t *data, size_t len, uint8_t out[20]) {
    uint8_t sha[SHA256_DIGEST_LENGTH];
    SHA256(data, len, sha);
    RIPEMD160(sha, SHA256_DIGEST_LENGTH, out);
}
