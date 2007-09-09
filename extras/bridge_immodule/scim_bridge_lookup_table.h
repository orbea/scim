/**
 * @file scim_lookup_table.h
 * @brief Definition of LookupTable classes.
 */

/*
 * Smart Common Input Method
 * 
 * Copyright (c) 2002-2005 James Su <suzhe@tsinghua.org.cn>
 *
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA  02111-1307  USA
 */
 
#ifndef SCIM_BRIDGE_LOOKUP_TABLE_H_
#define SCIM_BRIDGE_LOOKUP_TABLE_H_

#include <stdlib.h>

#include "scim_bridge_attribute.h"
#include "scim_bridge_types.h"

/**
 * Data struct of lookup tables.
 */
typedef struct _ScimLookupTable ScimLookupTable;

/**
 * Allocate a new lookup table.
 * 
 * @return A new lookup table.
 */
ScimLookupTable *scim_alloc_lookup_table ();

/**
 * Free a lookup table.
 * 
 * @param lookup_table A lookup table.
 */
void scim_free_lookup_table (ScimLookupTable *lookup_table);

/**
 * Move the cursor up in the lookup table.
 * 
 * @param lookup_table The lookup table.
 */
void scim_lookup_table_cursor_up (ScimLookupTable *lookup_table);

/**
 * Move the cursor down in the lookup table.
 * 
 * @param lookup_table The lookup table.
 */
void scim_lookup_table_cursor_down (ScimLookupTable *lookup_table);

#endif /*SCIM_BRIDGE_LOOKUP_TABLE_H_*/