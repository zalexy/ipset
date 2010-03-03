/* -*- coding: utf-8 -*-
 * ----------------------------------------------------------------------
 * Copyright © 2009-2010, RedJack, LLC.
 * All rights reserved.
 *
 * Please see the LICENSE.txt file in this distribution for license
 * details.
 * ----------------------------------------------------------------------
 */

#include <stdio.h>

/*
 * The IPv4 and IPv6 set types are basically identical, except for the
 * names of the functions, and the size of the values that are being
 * stored.  Rather than having two mostly duplicate definitions of
 * each function, we define “template functions” where anything that
 * depends on the size of the IP address is defined using the
 * following macros.
 */


/**
 * The name of the ipvX_set_t type.
 */

#define IP_SET_T ipv6_set_t

/**
 * The number of bits in an IPvX address.
 */

#define IP_BIT_SIZE  IPV6_BIT_SIZE

/**
 * Creates a identifier of the form “ipset_ipv6_<basename>”.
 */

#define IPSET_NAME(basename) ipset_ipv6_##basename


/*
 * Now include all of the templates.
 */

#include "internal-template.c"
#include "modify-template.c"
