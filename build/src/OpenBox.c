/* OpenBox.c generated by valac 0.32.1, the Vala compiler
 * generated from OpenBox.vala, do not modify */

/*
 * Copyright (c) 2015 Peter Arnold
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <granite.h>
#include <gdk/gdk.h>
#include <gtksourceview/gtksource.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>


#define TYPE_OPEN_BOX (open_box_get_type ())
#define OPEN_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_OPEN_BOX, OpenBox))
#define OPEN_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_OPEN_BOX, OpenBoxClass))
#define IS_OPEN_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_OPEN_BOX))
#define IS_OPEN_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_OPEN_BOX))
#define OPEN_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_OPEN_BOX, OpenBoxClass))

typedef struct _OpenBox OpenBox;
typedef struct _OpenBoxClass OpenBoxClass;
typedef struct _OpenBoxPrivate OpenBoxPrivate;

#define TYPE_CONTROLLER (controller_get_type ())
#define CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CONTROLLER, Controller))
#define CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CONTROLLER, ControllerClass))
#define IS_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CONTROLLER))
#define IS_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CONTROLLER))
#define CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CONTROLLER, ControllerClass))

typedef struct _Controller Controller;
typedef struct _ControllerClass ControllerClass;

#define TYPE_LIST_FOOTER (list_footer_get_type ())
#define LIST_FOOTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_LIST_FOOTER, ListFooter))
#define LIST_FOOTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_LIST_FOOTER, ListFooterClass))
#define IS_LIST_FOOTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_LIST_FOOTER))
#define IS_LIST_FOOTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_LIST_FOOTER))
#define LIST_FOOTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_LIST_FOOTER, ListFooterClass))

typedef struct _ListFooter ListFooter;
typedef struct _ListFooterClass ListFooterClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_INPUT_VIEW (input_view_get_type ())
#define INPUT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_INPUT_VIEW, InputView))
#define INPUT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_INPUT_VIEW, InputViewClass))
#define IS_INPUT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_INPUT_VIEW))
#define IS_INPUT_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_INPUT_VIEW))
#define INPUT_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_INPUT_VIEW, InputViewClass))

typedef struct _InputView InputView;
typedef struct _InputViewClass InputViewClass;
typedef struct _InputViewPrivate InputViewPrivate;

#define TYPE_NASC_SHEET (nasc_sheet_get_type ())
#define NASC_SHEET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_NASC_SHEET, NascSheet))
#define NASC_SHEET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_NASC_SHEET, NascSheetClass))
#define IS_NASC_SHEET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_NASC_SHEET))
#define IS_NASC_SHEET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_NASC_SHEET))
#define NASC_SHEET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_NASC_SHEET, NascSheetClass))

typedef struct _NascSheet NascSheet;
typedef struct _NascSheetClass NascSheetClass;
typedef struct _ListFooterPrivate ListFooterPrivate;
typedef struct _Block14Data Block14Data;

struct _OpenBox {
	GtkBox parent_instance;
	OpenBoxPrivate * priv;
};

struct _OpenBoxClass {
	GtkBoxClass parent_class;
};

struct _OpenBoxPrivate {
	gboolean open_mode;
	GtkScrolledWindow* scroll;
	gboolean initialized;
	Controller* controller;
	GraniteWidgetsSourceList* source_list;
	ListFooter* footer;
};

struct _InputView {
	GtkBox parent_instance;
	InputViewPrivate * priv;
	GtkSourceBuffer* buffer;
	GtkSourceView* source_view;
	GeeArrayList* operators;
	gboolean skip_change;
	gboolean scroll_needed;
};

struct _InputViewClass {
	GtkBoxClass parent_class;
};

struct _ListFooter {
	GtkToolbar parent_instance;
	ListFooterPrivate * priv;
	Controller* controller;
};

struct _ListFooterClass {
	GtkToolbarClass parent_class;
};

struct _Block14Data {
	int _ref_count_;
	OpenBox* self;
	Controller* controller;
};


static gpointer open_box_parent_class = NULL;

GType open_box_get_type (void) G_GNUC_CONST;
GType controller_get_type (void) G_GNUC_CONST;
GType list_footer_get_type (void) G_GNUC_CONST;
#define OPEN_BOX_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_OPEN_BOX, OpenBoxPrivate))
enum  {
	OPEN_BOX_DUMMY_PROPERTY
};
OpenBox* open_box_new (void);
OpenBox* open_box_construct (GType object_type);
ListFooter* list_footer_new (void);
ListFooter* list_footer_construct (GType object_type);
static gboolean __lambda92_ (OpenBox* self, GdkEventKey* e);
GType input_view_get_type (void) G_GNUC_CONST;
InputView* controller_get_input (Controller* self);
static void open_box_on_add_sheet (OpenBox* self);
static void open_box_on_remove_sheet (OpenBox* self);
static gboolean ___lambda92__gtk_widget_key_press_event (GtkWidget* _sender, GdkEventKey* event, gpointer self);
static void _open_box_on_add_sheet_list_footer_add_sheet (ListFooter* _sender, gpointer self);
static void _open_box_on_remove_sheet_list_footer_remove_sheet (ListFooter* _sender, gpointer self);
static void open_box_on_undo_sheet (OpenBox* self);
static void _open_box_on_undo_sheet_list_footer_undo (ListFooter* _sender, gpointer self);
GType nasc_sheet_get_type (void) G_GNUC_CONST;
NascSheet* controller_add_sheet (Controller* self);
static void open_box_update (OpenBox* self);
void controller_remove_sheet (Controller* self, NascSheet* sheet);
NascSheet* controller_get_actual_sheet (Controller* self);
void controller_undo_removal (Controller* self);
gboolean open_box_is_open (OpenBox* self);
void open_box_open (OpenBox* self, Controller* controller);
static void open_box_setup_open_box (OpenBox* self, Controller* controller);
void open_box_close (OpenBox* self);
static Block14Data* block14_data_ref (Block14Data* _data14_);
static void block14_data_unref (void * _userdata_);
static void __lambda93_ (Block14Data* _data14_, GraniteWidgetsSourceListItem* i);
void list_footer_update_ui (ListFooter* self);
GeeArrayList* controller_get_sheets (Controller* self);
void controller_set_sheet (Controller* self, NascSheet* sheet);
static gboolean _____lambda94_ (Block14Data* _data14_);
static gboolean ______lambda94__gsource_func (gpointer self);
static void ___lambda93__granite_widgets_source_list_item_selected (GraniteWidgetsSourceList* _sender, GraniteWidgetsSourceListItem* item, gpointer self);
static void open_box_finalize (GObject* obj);


static gboolean __lambda92_ (OpenBox* self, GdkEventKey* e) {
	gboolean result = FALSE;
	GdkEventKey* _tmp0_ = NULL;
	guint _tmp1_ = 0U;
	GdkEventKey* _tmp28_ = NULL;
	GdkModifierType _tmp29_ = 0;
	g_return_val_if_fail (e != NULL, FALSE);
	_tmp0_ = e;
	_tmp1_ = _tmp0_->keyval;
	if (_tmp1_ == ((guint) GDK_KEY_Escape)) {
		Controller* _tmp2_ = NULL;
		InputView* _tmp3_ = NULL;
		InputView* _tmp4_ = NULL;
		Controller* _tmp5_ = NULL;
		InputView* _tmp6_ = NULL;
		InputView* _tmp7_ = NULL;
		_tmp2_ = self->priv->controller;
		_tmp3_ = controller_get_input (_tmp2_);
		_tmp4_ = _tmp3_;
		_tmp4_->skip_change = TRUE;
		g_signal_emit_by_name (self, "escape");
		_tmp5_ = self->priv->controller;
		_tmp6_ = controller_get_input (_tmp5_);
		_tmp7_ = _tmp6_;
		_tmp7_->skip_change = FALSE;
		result = TRUE;
		return result;
	} else {
		GdkEventKey* _tmp8_ = NULL;
		guint _tmp9_ = 0U;
		_tmp8_ = e;
		_tmp9_ = _tmp8_->keyval;
		if (_tmp9_ == ((guint) GDK_KEY_Up)) {
			GraniteWidgetsSourceListItem* prev = NULL;
			GraniteWidgetsSourceList* _tmp10_ = NULL;
			GraniteWidgetsSourceList* _tmp11_ = NULL;
			GraniteWidgetsSourceListItem* _tmp12_ = NULL;
			GraniteWidgetsSourceListItem* _tmp13_ = NULL;
			GraniteWidgetsSourceListItem* _tmp14_ = NULL;
			GraniteWidgetsSourceListItem* _tmp15_ = NULL;
			_tmp10_ = self->priv->source_list;
			_tmp11_ = self->priv->source_list;
			_tmp12_ = granite_widgets_source_list_get_selected (_tmp11_);
			_tmp13_ = _tmp12_;
			_tmp14_ = granite_widgets_source_list_get_previous_item (_tmp10_, _tmp13_);
			prev = _tmp14_;
			_tmp15_ = prev;
			if (_tmp15_ != NULL) {
				GraniteWidgetsSourceList* _tmp16_ = NULL;
				GraniteWidgetsSourceListItem* _tmp17_ = NULL;
				_tmp16_ = self->priv->source_list;
				_tmp17_ = prev;
				granite_widgets_source_list_set_selected (_tmp16_, _tmp17_);
				result = TRUE;
				_g_object_unref0 (prev);
				return result;
			}
			result = FALSE;
			_g_object_unref0 (prev);
			return result;
		} else {
			GdkEventKey* _tmp18_ = NULL;
			guint _tmp19_ = 0U;
			_tmp18_ = e;
			_tmp19_ = _tmp18_->keyval;
			if (_tmp19_ == ((guint) GDK_KEY_Down)) {
				GraniteWidgetsSourceListItem* next = NULL;
				GraniteWidgetsSourceList* _tmp20_ = NULL;
				GraniteWidgetsSourceList* _tmp21_ = NULL;
				GraniteWidgetsSourceListItem* _tmp22_ = NULL;
				GraniteWidgetsSourceListItem* _tmp23_ = NULL;
				GraniteWidgetsSourceListItem* _tmp24_ = NULL;
				GraniteWidgetsSourceListItem* _tmp25_ = NULL;
				_tmp20_ = self->priv->source_list;
				_tmp21_ = self->priv->source_list;
				_tmp22_ = granite_widgets_source_list_get_selected (_tmp21_);
				_tmp23_ = _tmp22_;
				_tmp24_ = granite_widgets_source_list_get_next_item (_tmp20_, _tmp23_);
				next = _tmp24_;
				_tmp25_ = next;
				if (_tmp25_ != NULL) {
					GraniteWidgetsSourceList* _tmp26_ = NULL;
					GraniteWidgetsSourceListItem* _tmp27_ = NULL;
					_tmp26_ = self->priv->source_list;
					_tmp27_ = next;
					granite_widgets_source_list_set_selected (_tmp26_, _tmp27_);
					result = TRUE;
					_g_object_unref0 (next);
					return result;
				}
				result = FALSE;
				_g_object_unref0 (next);
				return result;
			}
		}
	}
	_tmp28_ = e;
	_tmp29_ = _tmp28_->state;
	if ((_tmp29_ & GDK_CONTROL_MASK) != 0) {
		GdkEventKey* _tmp30_ = NULL;
		guint _tmp31_ = 0U;
		_tmp30_ = e;
		_tmp31_ = _tmp30_->keyval;
		if (_tmp31_ == ((guint) GDK_KEY_o)) {
			Controller* _tmp32_ = NULL;
			InputView* _tmp33_ = NULL;
			InputView* _tmp34_ = NULL;
			Controller* _tmp35_ = NULL;
			InputView* _tmp36_ = NULL;
			InputView* _tmp37_ = NULL;
			_tmp32_ = self->priv->controller;
			_tmp33_ = controller_get_input (_tmp32_);
			_tmp34_ = _tmp33_;
			_tmp34_->skip_change = TRUE;
			g_signal_emit_by_name (self, "escape");
			_tmp35_ = self->priv->controller;
			_tmp36_ = controller_get_input (_tmp35_);
			_tmp37_ = _tmp36_;
			_tmp37_->skip_change = FALSE;
			result = TRUE;
			return result;
		} else {
			GdkEventKey* _tmp38_ = NULL;
			guint _tmp39_ = 0U;
			_tmp38_ = e;
			_tmp39_ = _tmp38_->keyval;
			if (_tmp39_ == ((guint) GDK_KEY_n)) {
				open_box_on_add_sheet (self);
				result = TRUE;
				return result;
			} else {
				GdkEventKey* _tmp40_ = NULL;
				guint _tmp41_ = 0U;
				_tmp40_ = e;
				_tmp41_ = _tmp40_->keyval;
				if (_tmp41_ == ((guint) GDK_KEY_d)) {
					open_box_on_remove_sheet (self);
					result = TRUE;
					return result;
				}
			}
		}
	}
	result = FALSE;
	return result;
}


static gboolean ___lambda92__gtk_widget_key_press_event (GtkWidget* _sender, GdkEventKey* event, gpointer self) {
	gboolean result;
	result = __lambda92_ ((OpenBox*) self, event);
	return result;
}


static void _open_box_on_add_sheet_list_footer_add_sheet (ListFooter* _sender, gpointer self) {
	open_box_on_add_sheet ((OpenBox*) self);
}


static void _open_box_on_remove_sheet_list_footer_remove_sheet (ListFooter* _sender, gpointer self) {
	open_box_on_remove_sheet ((OpenBox*) self);
}


static void _open_box_on_undo_sheet_list_footer_undo (ListFooter* _sender, gpointer self) {
	open_box_on_undo_sheet ((OpenBox*) self);
}


OpenBox* open_box_construct (GType object_type) {
	OpenBox * self = NULL;
	GtkScrolledWindow* _tmp0_ = NULL;
	GtkScrolledWindow* _tmp1_ = NULL;
	GraniteWidgetsSourceListExpandableItem* _tmp2_ = NULL;
	GraniteWidgetsSourceListExpandableItem* _tmp3_ = NULL;
	GraniteWidgetsSourceList* _tmp4_ = NULL;
	ListFooter* _tmp5_ = NULL;
	GtkScrolledWindow* _tmp6_ = NULL;
	GraniteWidgetsSourceList* _tmp7_ = NULL;
	GtkScrolledWindow* _tmp8_ = NULL;
	ListFooter* _tmp9_ = NULL;
	ListFooter* _tmp10_ = NULL;
	ListFooter* _tmp11_ = NULL;
	ListFooter* _tmp12_ = NULL;
	self = (OpenBox*) g_object_new (object_type, NULL);
	gtk_orientable_set_orientation ((GtkOrientable*) self, GTK_ORIENTATION_VERTICAL);
	gtk_widget_set_no_show_all ((GtkWidget*) self, TRUE);
	_tmp0_ = (GtkScrolledWindow*) gtk_scrolled_window_new (NULL, NULL);
	g_object_ref_sink (_tmp0_);
	_g_object_unref0 (self->priv->scroll);
	self->priv->scroll = _tmp0_;
	_tmp1_ = self->priv->scroll;
	gtk_scrolled_window_set_policy (_tmp1_, GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);
	_tmp2_ = granite_widgets_source_list_expandable_item_new ("");
	_tmp3_ = _tmp2_;
	_tmp4_ = granite_widgets_source_list_new (_tmp3_);
	g_object_ref_sink (_tmp4_);
	_g_object_unref0 (self->priv->source_list);
	self->priv->source_list = _tmp4_;
	_g_object_unref0 (_tmp3_);
	_tmp5_ = list_footer_new ();
	g_object_ref_sink (_tmp5_);
	_g_object_unref0 (self->priv->footer);
	self->priv->footer = _tmp5_;
	_tmp6_ = self->priv->scroll;
	_tmp7_ = self->priv->source_list;
	gtk_container_add ((GtkContainer*) _tmp6_, (GtkWidget*) _tmp7_);
	_tmp8_ = self->priv->scroll;
	gtk_box_pack_start ((GtkBox*) self, (GtkWidget*) _tmp8_, TRUE, TRUE, (guint) 0);
	_tmp9_ = self->priv->footer;
	gtk_box_pack_end ((GtkBox*) self, (GtkWidget*) _tmp9_, FALSE, FALSE, (guint) 0);
	gtk_widget_set_size_request ((GtkWidget*) self, 150, -1);
	g_signal_connect_object ((GtkWidget*) self, "key-press-event", (GCallback) ___lambda92__gtk_widget_key_press_event, self, 0);
	_tmp10_ = self->priv->footer;
	g_signal_connect_object (_tmp10_, "add-sheet", (GCallback) _open_box_on_add_sheet_list_footer_add_sheet, self, 0);
	_tmp11_ = self->priv->footer;
	g_signal_connect_object (_tmp11_, "remove-sheet", (GCallback) _open_box_on_remove_sheet_list_footer_remove_sheet, self, 0);
	_tmp12_ = self->priv->footer;
	g_signal_connect_object (_tmp12_, "undo", (GCallback) _open_box_on_undo_sheet_list_footer_undo, self, 0);
	return self;
}


OpenBox* open_box_new (void) {
	return open_box_construct (TYPE_OPEN_BOX);
}


static void open_box_on_add_sheet (OpenBox* self) {
	NascSheet* sh = NULL;
	Controller* _tmp0_ = NULL;
	NascSheet* _tmp1_ = NULL;
	GraniteWidgetsSourceList* _tmp2_ = NULL;
	GraniteWidgetsSourceList* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->controller;
	_tmp1_ = controller_add_sheet (_tmp0_);
	sh = _tmp1_;
	open_box_update (self);
	_tmp2_ = self->priv->source_list;
	granite_widgets_source_list_set_selected (_tmp2_, (GraniteWidgetsSourceListItem*) sh);
	_tmp3_ = self->priv->source_list;
	granite_widgets_source_list_start_editing_item (_tmp3_, (GraniteWidgetsSourceListItem*) sh);
	_g_object_unref0 (sh);
}


static void open_box_on_remove_sheet (OpenBox* self) {
	Controller* _tmp0_ = NULL;
	GraniteWidgetsSourceList* _tmp1_ = NULL;
	GraniteWidgetsSourceListItem* _tmp2_ = NULL;
	GraniteWidgetsSourceListItem* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->controller;
	_tmp1_ = self->priv->source_list;
	_tmp2_ = granite_widgets_source_list_get_selected (_tmp1_);
	_tmp3_ = _tmp2_;
	controller_remove_sheet (_tmp0_, G_TYPE_CHECK_INSTANCE_TYPE (_tmp3_, TYPE_NASC_SHEET) ? ((NascSheet*) _tmp3_) : NULL);
	open_box_update (self);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void open_box_on_undo_sheet (OpenBox* self) {
	NascSheet* sh = NULL;
	Controller* _tmp0_ = NULL;
	NascSheet* _tmp1_ = NULL;
	NascSheet* _tmp2_ = NULL;
	NascSheet* _tmp3_ = NULL;
	Controller* _tmp4_ = NULL;
	GraniteWidgetsSourceList* _tmp5_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->controller;
	_tmp1_ = controller_get_actual_sheet (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	sh = _tmp3_;
	_tmp4_ = self->priv->controller;
	controller_undo_removal (_tmp4_);
	open_box_update (self);
	_tmp5_ = self->priv->source_list;
	granite_widgets_source_list_set_selected (_tmp5_, (GraniteWidgetsSourceListItem*) sh);
	_g_object_unref0 (sh);
}


gboolean open_box_is_open (OpenBox* self) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->open_mode;
	result = _tmp0_;
	return result;
}


void open_box_open (OpenBox* self, Controller* controller) {
	gboolean _tmp0_ = FALSE;
	Controller* _tmp5_ = NULL;
	InputView* _tmp6_ = NULL;
	InputView* _tmp7_ = NULL;
	GtkSourceView* _tmp8_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (controller != NULL);
	gtk_widget_set_no_show_all ((GtkWidget*) self, FALSE);
	_tmp0_ = self->priv->initialized;
	if (!_tmp0_) {
		ListFooter* _tmp1_ = NULL;
		Controller* _tmp2_ = NULL;
		Controller* _tmp3_ = NULL;
		Controller* _tmp4_ = NULL;
		_tmp1_ = self->priv->footer;
		_tmp2_ = controller;
		_tmp3_ = _g_object_ref0 (_tmp2_);
		_g_object_unref0 (_tmp1_->controller);
		_tmp1_->controller = _tmp3_;
		_tmp4_ = controller;
		open_box_setup_open_box (self, _tmp4_);
	}
	gtk_widget_show ((GtkWidget*) self);
	gtk_widget_grab_focus ((GtkWidget*) self);
	open_box_update (self);
	self->priv->open_mode = TRUE;
	_tmp5_ = controller;
	_tmp6_ = controller_get_input (_tmp5_);
	_tmp7_ = _tmp6_;
	_tmp8_ = _tmp7_->source_view;
	gtk_text_view_set_editable ((GtkTextView*) _tmp8_, FALSE);
}


void open_box_close (OpenBox* self) {
	Controller* _tmp0_ = NULL;
	InputView* _tmp1_ = NULL;
	InputView* _tmp2_ = NULL;
	GtkSourceView* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->controller;
	_tmp1_ = controller_get_input (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_->source_view;
	gtk_text_view_set_editable ((GtkTextView*) _tmp3_, TRUE);
	gtk_widget_hide ((GtkWidget*) self);
	gtk_widget_set_no_show_all ((GtkWidget*) self, TRUE);
	self->priv->open_mode = FALSE;
}


static Block14Data* block14_data_ref (Block14Data* _data14_) {
	g_atomic_int_inc (&_data14_->_ref_count_);
	return _data14_;
}


static void block14_data_unref (void * _userdata_) {
	Block14Data* _data14_;
	_data14_ = (Block14Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data14_->_ref_count_)) {
		OpenBox* self;
		self = _data14_->self;
		_g_object_unref0 (_data14_->controller);
		_g_object_unref0 (self);
		g_slice_free (Block14Data, _data14_);
	}
}


static gboolean _____lambda94_ (Block14Data* _data14_) {
	OpenBox* self;
	gboolean result = FALSE;
	Controller* _tmp0_ = NULL;
	InputView* _tmp1_ = NULL;
	InputView* _tmp2_ = NULL;
	GtkSourceView* _tmp3_ = NULL;
	self = _data14_->self;
	_tmp0_ = _data14_->controller;
	_tmp1_ = controller_get_input (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_->source_view;
	gtk_text_view_set_editable ((GtkTextView*) _tmp3_, FALSE);
	result = FALSE;
	return result;
}


static gboolean ______lambda94__gsource_func (gpointer self) {
	gboolean result;
	result = _____lambda94_ (self);
	return result;
}


static void __lambda93_ (Block14Data* _data14_, GraniteWidgetsSourceListItem* i) {
	OpenBox* self;
	GraniteWidgetsSourceListItem* _tmp0_ = NULL;
	ListFooter* _tmp1_ = NULL;
	Controller* _tmp2_ = NULL;
	InputView* _tmp3_ = NULL;
	InputView* _tmp4_ = NULL;
	GtkSourceView* _tmp5_ = NULL;
	self = _data14_->self;
	_tmp0_ = i;
	if (_tmp0_ == NULL) {
		return;
	}
	_tmp1_ = self->priv->footer;
	list_footer_update_ui (_tmp1_);
	_tmp2_ = _data14_->controller;
	_tmp3_ = controller_get_input (_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp5_ = _tmp4_->source_view;
	gtk_text_view_set_editable ((GtkTextView*) _tmp5_, TRUE);
	{
		GeeArrayList* _fav_list = NULL;
		Controller* _tmp6_ = NULL;
		GeeArrayList* _tmp7_ = NULL;
		gint _fav_size = 0;
		GeeArrayList* _tmp8_ = NULL;
		gint _tmp9_ = 0;
		gint _tmp10_ = 0;
		gint _fav_index = 0;
		_tmp6_ = _data14_->controller;
		_tmp7_ = controller_get_sheets (_tmp6_);
		_fav_list = _tmp7_;
		_tmp8_ = _fav_list;
		_tmp9_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp8_);
		_tmp10_ = _tmp9_;
		_fav_size = _tmp10_;
		_fav_index = -1;
		while (TRUE) {
			gint _tmp11_ = 0;
			gint _tmp12_ = 0;
			gint _tmp13_ = 0;
			NascSheet* fav = NULL;
			GeeArrayList* _tmp14_ = NULL;
			gint _tmp15_ = 0;
			gpointer _tmp16_ = NULL;
			NascSheet* _tmp17_ = NULL;
			GraniteWidgetsSourceListItem* _tmp18_ = NULL;
			_tmp11_ = _fav_index;
			_fav_index = _tmp11_ + 1;
			_tmp12_ = _fav_index;
			_tmp13_ = _fav_size;
			if (!(_tmp12_ < _tmp13_)) {
				break;
			}
			_tmp14_ = _fav_list;
			_tmp15_ = _fav_index;
			_tmp16_ = gee_abstract_list_get ((GeeAbstractList*) _tmp14_, _tmp15_);
			fav = (NascSheet*) _tmp16_;
			_tmp17_ = fav;
			_tmp18_ = i;
			if (G_TYPE_CHECK_INSTANCE_CAST (_tmp17_, GRANITE_WIDGETS_SOURCE_LIST_TYPE_ITEM, GraniteWidgetsSourceListItem) == _tmp18_) {
				Controller* _tmp19_ = NULL;
				NascSheet* _tmp20_ = NULL;
				_tmp19_ = _data14_->controller;
				_tmp20_ = fav;
				controller_set_sheet (_tmp19_, _tmp20_);
				g_timeout_add_full (G_PRIORITY_DEFAULT, (guint) 500, ______lambda94__gsource_func, block14_data_ref (_data14_), block14_data_unref);
				_g_object_unref0 (fav);
				break;
			}
			_g_object_unref0 (fav);
		}
		_g_object_unref0 (_fav_list);
	}
}


static void ___lambda93__granite_widgets_source_list_item_selected (GraniteWidgetsSourceList* _sender, GraniteWidgetsSourceListItem* item, gpointer self) {
	__lambda93_ (self, item);
}


static void open_box_setup_open_box (OpenBox* self, Controller* controller) {
	Block14Data* _data14_;
	Controller* _tmp0_ = NULL;
	Controller* _tmp1_ = NULL;
	Controller* _tmp2_ = NULL;
	Controller* _tmp3_ = NULL;
	GraniteWidgetsSourceList* _tmp4_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (controller != NULL);
	_data14_ = g_slice_new0 (Block14Data);
	_data14_->_ref_count_ = 1;
	_data14_->self = g_object_ref (self);
	_tmp0_ = controller;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (_data14_->controller);
	_data14_->controller = _tmp1_;
	self->priv->initialized = TRUE;
	_tmp2_ = _data14_->controller;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	_g_object_unref0 (self->priv->controller);
	self->priv->controller = _tmp3_;
	open_box_update (self);
	_tmp4_ = self->priv->source_list;
	g_signal_connect_data (_tmp4_, "item-selected", (GCallback) ___lambda93__granite_widgets_source_list_item_selected, block14_data_ref (_data14_), (GClosureNotify) block14_data_unref, 0);
	gtk_widget_show_all ((GtkWidget*) self);
	block14_data_unref (_data14_);
	_data14_ = NULL;
}


static void open_box_update (OpenBox* self) {
	NascSheet* fav_sheet = NULL;
	Controller* _tmp0_ = NULL;
	NascSheet* _tmp1_ = NULL;
	NascSheet* _tmp2_ = NULL;
	NascSheet* _tmp3_ = NULL;
	GraniteWidgetsSourceList* _tmp4_ = NULL;
	GraniteWidgetsSourceListExpandableItem* _tmp5_ = NULL;
	GraniteWidgetsSourceListExpandableItem* _tmp6_ = NULL;
	GraniteWidgetsSourceList* _tmp7_ = NULL;
	GraniteWidgetsSourceList* _tmp23_ = NULL;
	NascSheet* _tmp24_ = NULL;
	GraniteWidgetsSourceList* _tmp25_ = NULL;
	NascSheet* _tmp26_ = NULL;
	ListFooter* _tmp27_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->controller;
	_tmp1_ = controller_get_actual_sheet (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	fav_sheet = _tmp3_;
	_tmp4_ = self->priv->source_list;
	_tmp5_ = granite_widgets_source_list_get_root (_tmp4_);
	_tmp6_ = _tmp5_;
	granite_widgets_source_list_expandable_item_clear (_tmp6_);
	_tmp7_ = self->priv->source_list;
	gtk_widget_grab_focus ((GtkWidget*) _tmp7_);
	{
		GeeArrayList* _fav_list = NULL;
		Controller* _tmp8_ = NULL;
		GeeArrayList* _tmp9_ = NULL;
		gint _fav_size = 0;
		GeeArrayList* _tmp10_ = NULL;
		gint _tmp11_ = 0;
		gint _tmp12_ = 0;
		gint _fav_index = 0;
		_tmp8_ = self->priv->controller;
		_tmp9_ = controller_get_sheets (_tmp8_);
		_fav_list = _tmp9_;
		_tmp10_ = _fav_list;
		_tmp11_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp10_);
		_tmp12_ = _tmp11_;
		_fav_size = _tmp12_;
		_fav_index = -1;
		while (TRUE) {
			gint _tmp13_ = 0;
			gint _tmp14_ = 0;
			gint _tmp15_ = 0;
			NascSheet* fav = NULL;
			GeeArrayList* _tmp16_ = NULL;
			gint _tmp17_ = 0;
			gpointer _tmp18_ = NULL;
			GraniteWidgetsSourceList* _tmp19_ = NULL;
			GraniteWidgetsSourceListExpandableItem* _tmp20_ = NULL;
			GraniteWidgetsSourceListExpandableItem* _tmp21_ = NULL;
			NascSheet* _tmp22_ = NULL;
			_tmp13_ = _fav_index;
			_fav_index = _tmp13_ + 1;
			_tmp14_ = _fav_index;
			_tmp15_ = _fav_size;
			if (!(_tmp14_ < _tmp15_)) {
				break;
			}
			_tmp16_ = _fav_list;
			_tmp17_ = _fav_index;
			_tmp18_ = gee_abstract_list_get ((GeeAbstractList*) _tmp16_, _tmp17_);
			fav = (NascSheet*) _tmp18_;
			_tmp19_ = self->priv->source_list;
			_tmp20_ = granite_widgets_source_list_get_root (_tmp19_);
			_tmp21_ = _tmp20_;
			_tmp22_ = fav;
			granite_widgets_source_list_expandable_item_add (_tmp21_, (GraniteWidgetsSourceListItem*) _tmp22_);
			_g_object_unref0 (fav);
		}
		_g_object_unref0 (_fav_list);
	}
	_tmp23_ = self->priv->source_list;
	_tmp24_ = fav_sheet;
	granite_widgets_source_list_set_selected (_tmp23_, (GraniteWidgetsSourceListItem*) _tmp24_);
	_tmp25_ = self->priv->source_list;
	_tmp26_ = fav_sheet;
	granite_widgets_source_list_scroll_to_item (_tmp25_, (GraniteWidgetsSourceListItem*) _tmp26_, TRUE, FALSE, (gfloat) 0);
	_tmp27_ = self->priv->footer;
	list_footer_update_ui (_tmp27_);
	_g_object_unref0 (fav_sheet);
}


static void open_box_class_init (OpenBoxClass * klass) {
	open_box_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (OpenBoxPrivate));
	G_OBJECT_CLASS (klass)->finalize = open_box_finalize;
	g_signal_new ("escape", TYPE_OPEN_BOX, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
}


static void open_box_instance_init (OpenBox * self) {
	self->priv = OPEN_BOX_GET_PRIVATE (self);
	self->priv->open_mode = FALSE;
	self->priv->initialized = FALSE;
}


static void open_box_finalize (GObject* obj) {
	OpenBox * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_OPEN_BOX, OpenBox);
	_g_object_unref0 (self->priv->scroll);
	_g_object_unref0 (self->priv->controller);
	_g_object_unref0 (self->priv->source_list);
	_g_object_unref0 (self->priv->footer);
	G_OBJECT_CLASS (open_box_parent_class)->finalize (obj);
}


GType open_box_get_type (void) {
	static volatile gsize open_box_type_id__volatile = 0;
	if (g_once_init_enter (&open_box_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (OpenBoxClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) open_box_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (OpenBox), 0, (GInstanceInitFunc) open_box_instance_init, NULL };
		GType open_box_type_id;
		open_box_type_id = g_type_register_static (gtk_box_get_type (), "OpenBox", &g_define_type_info, 0);
		g_once_init_leave (&open_box_type_id__volatile, open_box_type_id);
	}
	return open_box_type_id__volatile;
}



