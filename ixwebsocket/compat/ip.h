#pragma once
#include <stdint.h>
// Wii U stub for <netinet/ip.h> as it is not in wut

#ifndef IP_TOS
#define IP_TOS 1
#endif

#ifndef IP_TTL
#define IP_TTL 2
#endif

#ifndef AI_NUMERICSERV 
#define AI_NUMERICSERV 0 
#endif

struct iphdr {
    unsigned int ihl:4;
    unsigned int version:4;
    unsigned char tos;
    unsigned short tot_len;
    unsigned short id;
    unsigned short frag_off;
    unsigned char ttl;
    unsigned char protocol;
    unsigned short check;
    unsigned int saddr;
    unsigned int daddr;
};

/* Wii U IPv6 stub — provides minimal definitions so IXWebSocket compiles */

/* IPv6 address family does not exist on Wii U */
#ifndef AF_INET6
#define AF_INET6 99   /* dummy value, never used */
#endif

/* IPv6 address string length */
#ifndef INET6_ADDRSTRLEN
#define INET6_ADDRSTRLEN 46
#endif

/* Dummy IPv6 sockaddr */
#ifndef sockaddr_in6
struct sockaddr_in6 {
    uint16_t sin6_family;
    uint16_t sin6_port;
    uint32_t sin6_flowinfo;
    unsigned char sin6_addr[16];
    uint32_t sin6_scope_id;
};
#endif
