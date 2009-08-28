/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2009 Nokia
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#ifndef __TRACKER_KEYFILE_OBJECT_H__
#define __TRACKER_KEYFILE_OBJECT_H__

#include <glib.h>

G_BEGIN_DECLS

const gchar *tracker_keyfile_object_blurb            (gpointer     object,
						      const gchar *property);
gboolean     tracker_keyfile_object_default_boolean  (gpointer     object,
						      const gchar *property);
gint         tracker_keyfile_object_default_int      (gpointer     object,
						      const gchar *property);
gboolean     tracker_keyfile_object_validate_int     (gpointer     object,
						      const gchar *property,
						      gint         value);
void         tracker_keyfile_object_load_int         (gpointer     object,
						      const gchar *property,
						      GKeyFile    *key_file,
						      const gchar *group,
						      const gchar *key);
void         tracker_keyfile_object_load_boolean     (gpointer     object,
						      const gchar *property,
						      GKeyFile    *key_file,
						      const gchar *group,
						      const gchar *key);
void         tracker_keyfile_object_load_string      (gpointer     object,
						      const gchar *property,
						      GKeyFile    *key_file,
						      const gchar *group,
						      const gchar *key);
void         tracker_keyfile_object_load_string_list (gpointer     object,
						      const gchar *property,
						      GKeyFile    *key_file,
						      const gchar *group,
						      const gchar *key,
						      gboolean     is_directory_list);
void         tracker_keyfile_object_save_int         (gpointer     object,
						      const gchar *property,
						      GKeyFile    *key_file,
						      const gchar *group,
						      const gchar *key);
void         tracker_keyfile_object_save_boolean     (gpointer     object,
						      const gchar *property,
						      GKeyFile    *key_file,
						      const gchar *group,
						      const gchar *key);
void         tracker_keyfile_object_save_string      (gpointer     object,
						      const gchar *property,
						      GKeyFile    *key_file,
						      const gchar *group,
						      const gchar *key);
void         tracker_keyfile_object_save_string_list (gpointer     object,
						      const gchar *property,
						      GKeyFile    *key_file,
						      const gchar *group,
						      const gchar *key);

G_END_DECLS

#endif /* __TRACKER_KEYFILE_OBJECT_H__ */
