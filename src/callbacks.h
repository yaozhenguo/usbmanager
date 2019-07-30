/*************************************************************************
** callbacks.h for USBManager 
** Copyright (c) 2012, 2013 by YAO Zhen-Guo <yaozhenguo2006@gmail.com>
**
**  This program is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; either version 2 of the License.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program; if not, write to the Free Software
**  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
**
** (See the included file COPYING)
*************************************************************************/
#ifndef _CALLBACKS_H
#define _CALLBACKS_H

extern void	on_buttonClose_clicked	(GtkButton *button, gpointer user_data);
extern gboolean on_windowmain_delete_event(GtkWidget *widget, GdkEvent *event, gpointer user_data);
extern void	on_buttoninfo_clicked	(GtkButton *button, gpointer user_data);
extern void	on_buttonDelete_clicked	(GtkButton *button, gpointer user_data);
extern void	on_buttonAbout_clicked	(GtkButton *button, gpointer user_data);
extern gint	on_timer_timeout (gpointer user_data);
extern void 	on_popped(GtkStatusbar* statusbar, guint id, const gchar* text);


#endif
