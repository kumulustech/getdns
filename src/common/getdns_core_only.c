/**
 *
 * /brief getdns core functions
 * 
 * This is the meat of the API
 * Originally taken from the getdns API description pseudo implementation.
 *
 */
/* The MIT License (MIT)
 * Copyright (c) 2013 Verisign, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <getdns_libevent.h>

/* stuff to make it compile pedantically */
#define UNUSED_PARAM(x) ((void)(x))

/*
 * getdns_general
 */

getdns_return_t
getdns_general(
  getdns_context_t           context,
  const char                 *name,
  uint16_t                   request_type,
  struct getdns_dict         *extensions,
  void                       *userarg,
  getdns_transaction_t       *transaction_id,
  getdns_callback_t          callback
)
{ UNUSED_PARAM(context); UNUSED_PARAM(name); UNUSED_PARAM(request_type); UNUSED_PARAM(extensions); UNUSED_PARAM(userarg);
UNUSED_PARAM(transaction_id); UNUSED_PARAM(callback); return GETDNS_RETURN_GOOD; } /* getdns_general */

getdns_return_t
getdns_address(
  getdns_context_t           context,
  const char                 *name,
  struct getdns_dict         *extensions,
  void                       *userarg,
  getdns_transaction_t       *transaction_id,
  getdns_callback_t          callback
)
{ UNUSED_PARAM(context); UNUSED_PARAM(name); UNUSED_PARAM(extensions); UNUSED_PARAM(userarg);
UNUSED_PARAM(transaction_id); UNUSED_PARAM(callback); return GETDNS_RETURN_GOOD; }

getdns_return_t
getdns_hostname(
  getdns_context_t           context,
  struct getdns_dict         *address,
  struct getdns_dict         *extensions,
  void                       *userarg,
  getdns_transaction_t       *transaction_id,
  getdns_callback_t          callback
)
{ UNUSED_PARAM(context); UNUSED_PARAM(address); UNUSED_PARAM(extensions); UNUSED_PARAM(userarg);
UNUSED_PARAM(transaction_id); UNUSED_PARAM(callback); return GETDNS_RETURN_GOOD; }

getdns_return_t
getdns_service(
  getdns_context_t           context,
  const char                 *name,
  struct getdns_dict         *extensions,
  void                       *userarg,
  getdns_transaction_t       *transaction_id,
  getdns_callback_t          callback
)
{ UNUSED_PARAM(context); UNUSED_PARAM(name); UNUSED_PARAM(extensions); UNUSED_PARAM(userarg);
UNUSED_PARAM(transaction_id); UNUSED_PARAM(callback); return GETDNS_RETURN_GOOD; }

getdns_return_t
getdns_cancel_callback(
	getdns_context_t           context,
	getdns_transaction_t       transaction_id
)
{ UNUSED_PARAM(context); UNUSED_PARAM(transaction_id); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_list_get_length(struct getdns_list *this_list, size_t *answer)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_list_get_data_type(struct getdns_list *this_list, size_t index, getdns_data_type *answer)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(index); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_list_get_dict(struct getdns_list *this_list, size_t index, struct getdns_dict **answer)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(index); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_list_get_list(struct getdns_list *this_list, size_t index, struct getdns_list **answer)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(index); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_list_get_bindata(struct getdns_list *this_list, size_t index, struct getdns_bindata **answer)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(index); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_list_get_int(struct getdns_list *this_list, size_t index, uint32_t *answer)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(index); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_dict_get_names(struct getdns_dict *this_dict, struct getdns_list **answer)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_dict_get_data_type(struct getdns_dict *this_dict, char *name, getdns_data_type *answer)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(name); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_dict_get_dict(struct getdns_dict *this_dict, char *name, struct getdns_dict **answer)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(name); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_dict_get_list(struct getdns_dict *this_dict, char *name, struct getdns_list **answer)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(name); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_dict_get_bindata(struct getdns_dict *this_dict, char *name, struct getdns_bindata **answer)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(name); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_dict_get_int(struct getdns_dict *this_dict, char *name, uint32_t *answer)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(name); UNUSED_PARAM(answer); return GETDNS_RETURN_GOOD; }

struct getdns_list * getdns_list_create()
{ return NULL; }

void getdns_list_destroy(struct getdns_list *this_list)
{ UNUSED_PARAM(this_list); }

getdns_return_t getdns_list_set_dict(struct getdns_list *this_list, size_t index, struct getdns_dict *child_dict)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(index); UNUSED_PARAM(child_dict); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_list_set_list(struct getdns_list *this_list, size_t index, struct getdns_list *child_list)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(index); UNUSED_PARAM(child_list); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_list_set_bindata(struct getdns_list *this_list, size_t index, struct getdns_bindata *child_bindata)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(index); UNUSED_PARAM(child_bindata); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_list_set_int(struct getdns_list *this_list, size_t index, uint32_t child_uint32)
{ UNUSED_PARAM(this_list); UNUSED_PARAM(index); UNUSED_PARAM(child_uint32); return GETDNS_RETURN_GOOD; }

struct getdns_dict * getdns_dict_create()
{ return NULL; }

void getdns_dict_destroy(struct getdns_dict *this_dict)
{ UNUSED_PARAM(this_dict); }

getdns_return_t getdns_dict_set_dict(struct getdns_dict *this_dict, char *name, struct getdns_dict *child_dict)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(name); UNUSED_PARAM(child_dict); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_dict_set_list(struct getdns_dict *this_dict, char *name, struct getdns_list *child_list)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(name); UNUSED_PARAM(child_list); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_dict_set_bindata(struct getdns_dict *this_dict, char *name, struct getdns_bindata *child_bindata)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(name); UNUSED_PARAM(child_bindata); return GETDNS_RETURN_GOOD; }

getdns_return_t getdns_dict_set_int(struct getdns_dict *this_dict, char *name, uint32_t child_uint32)
{ UNUSED_PARAM(this_dict); UNUSED_PARAM(name); UNUSED_PARAM(child_uint32); return GETDNS_RETURN_GOOD; }

char *
getdns_convert_dns_name_to_fqdn(
  char  *name_from_dns_response
)
{ UNUSED_PARAM(name_from_dns_response); return NULL; }

char *
getdns_convert_fqdn_to_dns_name(
  char  *fqdn_as_string
)
{ UNUSED_PARAM(fqdn_as_string); return NULL; }

char *
getdns_convert_ulabel_to_alabel(
	char  *ulabel
)
{ UNUSED_PARAM(ulabel); return NULL; }

char *
getdns_convert_alabel_to_ulabel(
	char  *alabel
)
{ UNUSED_PARAM(alabel); return NULL; }

getdns_return_t
getdns_validate_dnssec(
  struct getdns_bindata  *record_to_validate,
  struct getdns_list     *bundle_of_support_records,
  struct getdns_list     *trust_anchor_rdatas
)
{ UNUSED_PARAM(record_to_validate); UNUSED_PARAM(bundle_of_support_records); UNUSED_PARAM(trust_anchor_rdatas);
return GETDNS_RETURN_GOOD; }


char *
getdns_pretty_print_dict(
	struct getdns_dict     *some_dict
)
{ UNUSED_PARAM(some_dict); return NULL; }

char *
getdns_display_ip_address(
  struct getdns_bindata    *bindata_of_ipv4_or_ipv6_address
)
{ UNUSED_PARAM(bindata_of_ipv4_or_ipv6_address); return NULL; }

/* getdns_core_only.c */
