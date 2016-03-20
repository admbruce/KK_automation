// Copyright (c) 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   ui/accessibility/ax_enums.idl
// DO NOT EDIT.

#ifndef UI_ACCESSIBILITY_AX_ENUMS_H__
#define UI_ACCESSIBILITY_AX_ENUMS_H__

#include <map>
#include <string>
#include <vector>

#include "base/basictypes.h"
#include "base/logging.h"
#include "base/memory/linked_ptr.h"
#include "base/memory/scoped_ptr.h"
#include "base/values.h"

namespace ui {

//
// Types
//

// <p>For new entries to the following three enums, also add to
// chrome/common/extensions/api/automation.idl.</p><p>Explanation of the
// comments next to these events:</p><p>Web: this event is only used in web
// content. Unless a specific platform      is specified, it fires a native
// event on multiple platforms.</p><p>Native: this event is only used in native
// UI.</p><p>Implicit: it would be cleaner if we just updated the AX node
// and each platform fired the appropriate events to indicate which
// platform-specific attributes changed.</p><p>If unspecified, the event is used
// across web and native on multiple platforms.</p>
enum AXEvent {
  AX_EVENT_NONE,
  AX_EVENT_ACTIVEDESCENDANTCHANGED,
  AX_EVENT_ALERT,
  AX_EVENT_ARIA_ATTRIBUTE_CHANGED,
  AX_EVENT_AUTOCORRECTION_OCCURED,
  AX_EVENT_BLUR,
  AX_EVENT_CHECKED_STATE_CHANGED,
  AX_EVENT_CHILDREN_CHANGED,
  AX_EVENT_DOCUMENT_SELECTION_CHANGED,
  AX_EVENT_FOCUS,
  AX_EVENT_HIDE,
  AX_EVENT_HOVER,
  AX_EVENT_INVALID_STATUS_CHANGED,
  AX_EVENT_LAYOUT_COMPLETE,
  AX_EVENT_LIVE_REGION_CHANGED,
  AX_EVENT_LOAD_COMPLETE,
  AX_EVENT_LOCATION_CHANGED,
  AX_EVENT_MENU_END,
  AX_EVENT_MENU_LIST_ITEM_SELECTED,
  AX_EVENT_MENU_LIST_VALUE_CHANGED,
  AX_EVENT_MENU_POPUP_END,
  AX_EVENT_MENU_POPUP_START,
  AX_EVENT_MENU_START,
  AX_EVENT_ROW_COLLAPSED,
  AX_EVENT_ROW_COUNT_CHANGED,
  AX_EVENT_ROW_EXPANDED,
  AX_EVENT_SCROLL_POSITION_CHANGED,
  AX_EVENT_SCROLLED_TO_ANCHOR,
  AX_EVENT_SELECTED_CHILDREN_CHANGED,
  AX_EVENT_SELECTION,
  AX_EVENT_SELECTION_ADD,
  AX_EVENT_SELECTION_REMOVE,
  AX_EVENT_SHOW,
  AX_EVENT_TEXT_CHANGED,
  AX_EVENT_TEXT_SELECTION_CHANGED,
  AX_EVENT_TREE_CHANGED,
  AX_EVENT_VALUE_CHANGED,
  AX_EVENT_LAST = AX_EVENT_VALUE_CHANGED,
};


std::string ToString(AXEvent as_enum);
AXEvent ParseAXEvent(const std::string& as_string);

enum AXRole {
  AX_ROLE_NONE,
  AX_ROLE_ALERT_DIALOG,
  AX_ROLE_ALERT,
  AX_ROLE_ANNOTATION,
  AX_ROLE_APPLICATION,
  AX_ROLE_ARTICLE,
  AX_ROLE_BANNER,
  AX_ROLE_BLOCKQUOTE,
  AX_ROLE_BUSY_INDICATOR,
  AX_ROLE_BUTTON,
  AX_ROLE_BUTTON_DROP_DOWN,
  AX_ROLE_CANVAS,
  AX_ROLE_CAPTION,
  AX_ROLE_CELL,
  AX_ROLE_CHECK_BOX,
  AX_ROLE_CLIENT,
  AX_ROLE_COLOR_WELL,
  AX_ROLE_COLUMN_HEADER,
  AX_ROLE_COLUMN,
  AX_ROLE_COMBO_BOX,
  AX_ROLE_COMPLEMENTARY,
  AX_ROLE_CONTENT_INFO,
  AX_ROLE_DATE,
  AX_ROLE_DATE_TIME,
  AX_ROLE_DEFINITION,
  AX_ROLE_DESCRIPTION_LIST_DETAIL,
  AX_ROLE_DESCRIPTION_LIST,
  AX_ROLE_DESCRIPTION_LIST_TERM,
  AX_ROLE_DESKTOP,
  AX_ROLE_DETAILS,
  AX_ROLE_DIALOG,
  AX_ROLE_DIRECTORY,
  AX_ROLE_DISCLOSURE_TRIANGLE,
  AX_ROLE_DIV,
  AX_ROLE_DOCUMENT,
  AX_ROLE_EMBEDDED_OBJECT,
  AX_ROLE_FIGCAPTION,
  AX_ROLE_FIGURE,
  AX_ROLE_FOOTER,
  AX_ROLE_FORM,
  AX_ROLE_GRID,
  AX_ROLE_GROUP,
  AX_ROLE_HEADING,
  AX_ROLE_IFRAME,
  AX_ROLE_IFRAME_PRESENTATIONAL,
  AX_ROLE_IGNORED,
  AX_ROLE_IMAGE_MAP_LINK,
  AX_ROLE_IMAGE_MAP,
  AX_ROLE_IMAGE,
  AX_ROLE_INLINE_TEXT_BOX,
  AX_ROLE_INPUT_TIME,
  AX_ROLE_LABEL_TEXT,
  AX_ROLE_LEGEND,
  AX_ROLE_LINE_BREAK,
  AX_ROLE_LINK,
  AX_ROLE_LIST_BOX_OPTION,
  AX_ROLE_LIST_BOX,
  AX_ROLE_LIST_ITEM,
  AX_ROLE_LIST_MARKER,
  AX_ROLE_LIST,
  AX_ROLE_LOCATION_BAR,
  AX_ROLE_LOG,
  AX_ROLE_MAIN,
  AX_ROLE_MARK,
  AX_ROLE_MARQUEE,
  AX_ROLE_MATH,
  AX_ROLE_MENU_BAR,
  AX_ROLE_MENU_BUTTON,
  AX_ROLE_MENU_ITEM,
  AX_ROLE_MENU_ITEM_CHECK_BOX,
  AX_ROLE_MENU_ITEM_RADIO,
  AX_ROLE_MENU_LIST_OPTION,
  AX_ROLE_MENU_LIST_POPUP,
  AX_ROLE_MENU,
  AX_ROLE_METER,
  AX_ROLE_NAVIGATION,
  AX_ROLE_NOTE,
  AX_ROLE_OUTLINE,
  AX_ROLE_PANE,
  AX_ROLE_PARAGRAPH,
  AX_ROLE_POP_UP_BUTTON,
  AX_ROLE_PRE,
  AX_ROLE_PRESENTATIONAL,
  AX_ROLE_PROGRESS_INDICATOR,
  AX_ROLE_RADIO_BUTTON,
  AX_ROLE_RADIO_GROUP,
  AX_ROLE_REGION,
  AX_ROLE_ROOT_WEB_AREA,
  AX_ROLE_ROW_HEADER,
  AX_ROLE_ROW,
  AX_ROLE_RUBY,
  AX_ROLE_RULER,
  AX_ROLE_SVG_ROOT,
  AX_ROLE_SCROLL_AREA,
  AX_ROLE_SCROLL_BAR,
  AX_ROLE_SEAMLESS_WEB_AREA,
  AX_ROLE_SEARCH,
  AX_ROLE_SEARCH_BOX,
  AX_ROLE_SLIDER,
  AX_ROLE_SLIDER_THUMB,
  AX_ROLE_SPIN_BUTTON_PART,
  AX_ROLE_SPIN_BUTTON,
  AX_ROLE_SPLITTER,
  AX_ROLE_STATIC_TEXT,
  AX_ROLE_STATUS,
  AX_ROLE_SWITCH,
  AX_ROLE_TAB_GROUP,
  AX_ROLE_TAB_LIST,
  AX_ROLE_TAB_PANEL,
  AX_ROLE_TAB,
  AX_ROLE_TABLE_HEADER_CONTAINER,
  AX_ROLE_TABLE,
  AX_ROLE_TEXT_FIELD,
  AX_ROLE_TIME,
  AX_ROLE_TIMER,
  AX_ROLE_TITLE_BAR,
  AX_ROLE_TOGGLE_BUTTON,
  AX_ROLE_TOOLBAR,
  AX_ROLE_TREE_GRID,
  AX_ROLE_TREE_ITEM,
  AX_ROLE_TREE,
  AX_ROLE_UNKNOWN,
  AX_ROLE_TOOLTIP,
  AX_ROLE_WEB_AREA,
  AX_ROLE_WEB_VIEW,
  AX_ROLE_WINDOW,
  AX_ROLE_LAST = AX_ROLE_WINDOW,
};


std::string ToString(AXRole as_enum);
AXRole ParseAXRole(const std::string& as_string);

// TODO(dmazzoni): switch content/ to use AX_STATE_DISABLED instead of
// !AX_STATE_ENABLED.
enum AXState {
  AX_STATE_NONE,
  AX_STATE_BUSY,
  AX_STATE_CHECKED,
  AX_STATE_COLLAPSED,
  AX_STATE_DEFAULT,
  AX_STATE_DISABLED,
  AX_STATE_EDITABLE,
  AX_STATE_ENABLED,
  AX_STATE_EXPANDED,
  AX_STATE_FOCUSABLE,
  AX_STATE_FOCUSED,
  AX_STATE_HASPOPUP,
  AX_STATE_HORIZONTAL,
  AX_STATE_HOVERED,
  AX_STATE_INDETERMINATE,
  AX_STATE_INVISIBLE,
  AX_STATE_LINKED,
  AX_STATE_MULTILINE,
  AX_STATE_MULTISELECTABLE,
  AX_STATE_OFFSCREEN,
  AX_STATE_PRESSED,
  AX_STATE_PROTECTED,
  AX_STATE_READ_ONLY,
  AX_STATE_REQUIRED,
  AX_STATE_RICHLY_EDITABLE,
  AX_STATE_SELECTABLE,
  AX_STATE_SELECTED,
  AX_STATE_VERTICAL,
  AX_STATE_VISITED,
  AX_STATE_LAST = AX_STATE_VISITED,
};


std::string ToString(AXState as_enum);
AXState ParseAXState(const std::string& as_string);

// A change to the accessibility tree.
enum AXMutation {
  AX_MUTATION_NONE,
  AX_MUTATION_NODE_CREATED,
  AX_MUTATION_SUBTREE_CREATED,
  AX_MUTATION_NODE_CHANGED,
  AX_MUTATION_NODE_REMOVED,
  AX_MUTATION_LAST = AX_MUTATION_NODE_REMOVED,
};


std::string ToString(AXMutation as_enum);
AXMutation ParseAXMutation(const std::string& as_string);

enum AXStringAttribute {
  AX_STRING_ATTRIBUTE_NONE,
  AX_ATTR_ACCESS_KEY,
  AX_ATTR_ACTION,
  AX_ATTR_AUTO_COMPLETE,
  AX_ATTR_CONTAINER_LIVE_RELEVANT,
  AX_ATTR_CONTAINER_LIVE_STATUS,
  AX_ATTR_DESCRIPTION,
  AX_ATTR_DISPLAY,
  AX_ATTR_HTML_TAG,
  AX_ATTR_ARIA_INVALID_VALUE,
  AX_ATTR_NAME,
  AX_ATTR_LIVE_RELEVANT,
  AX_ATTR_LIVE_STATUS,
  AX_ATTR_PLACEHOLDER,
  AX_ATTR_ROLE,
  AX_ATTR_SHORTCUT,
  AX_ATTR_URL,
  AX_ATTR_VALUE,
  AX_STRING_ATTRIBUTE_LAST = AX_ATTR_VALUE,
};


std::string ToString(AXStringAttribute as_enum);
AXStringAttribute ParseAXStringAttribute(const std::string& as_string);

enum AXIntAttribute {
  AX_INT_ATTRIBUTE_NONE,
  AX_ATTR_SCROLL_X,
  AX_ATTR_SCROLL_X_MIN,
  AX_ATTR_SCROLL_X_MAX,
  AX_ATTR_SCROLL_Y,
  AX_ATTR_SCROLL_Y_MIN,
  AX_ATTR_SCROLL_Y_MAX,
  AX_ATTR_TEXT_SEL_START,
  AX_ATTR_TEXT_SEL_END,
  AX_ATTR_TABLE_ROW_COUNT,
  AX_ATTR_TABLE_COLUMN_COUNT,
  AX_ATTR_TABLE_HEADER_ID,
  AX_ATTR_TABLE_ROW_INDEX,
  AX_ATTR_TABLE_ROW_HEADER_ID,
  AX_ATTR_TABLE_COLUMN_INDEX,
  AX_ATTR_TABLE_COLUMN_HEADER_ID,
  AX_ATTR_TABLE_CELL_COLUMN_INDEX,
  AX_ATTR_TABLE_CELL_COLUMN_SPAN,
  AX_ATTR_TABLE_CELL_ROW_INDEX,
  AX_ATTR_TABLE_CELL_ROW_SPAN,
  AX_ATTR_SORT_DIRECTION,
  AX_ATTR_HIERARCHICAL_LEVEL,
  AX_ATTR_NAME_FROM,
  AX_ATTR_DESCRIPTION_FROM,
  AX_ATTR_ACTIVEDESCENDANT_ID,
  AX_ATTR_CHILD_TREE_ID,
  AX_ATTR_SET_SIZE,
  AX_ATTR_POS_IN_SET,
  AX_ATTR_COLOR_VALUE,
  AX_ATTR_BACKGROUND_COLOR,
  AX_ATTR_COLOR,
  AX_ATTR_INVALID_STATE,
  AX_ATTR_TEXT_DIRECTION,
  AX_ATTR_TEXT_STYLE,
  AX_INT_ATTRIBUTE_LAST = AX_ATTR_TEXT_STYLE,
};


std::string ToString(AXIntAttribute as_enum);
AXIntAttribute ParseAXIntAttribute(const std::string& as_string);

enum AXFloatAttribute {
  AX_FLOAT_ATTRIBUTE_NONE,
  AX_ATTR_VALUE_FOR_RANGE,
  AX_ATTR_MIN_VALUE_FOR_RANGE,
  AX_ATTR_MAX_VALUE_FOR_RANGE,
  AX_ATTR_FONT_SIZE,
  AX_FLOAT_ATTRIBUTE_LAST = AX_ATTR_FONT_SIZE,
};


std::string ToString(AXFloatAttribute as_enum);
AXFloatAttribute ParseAXFloatAttribute(const std::string& as_string);

enum AXBoolAttribute {
  AX_BOOL_ATTRIBUTE_NONE,
  AX_ATTR_BUTTON_MIXED,
  AX_ATTR_CONTAINER_LIVE_ATOMIC,
  AX_ATTR_CONTAINER_LIVE_BUSY,
  AX_ATTR_LIVE_ATOMIC,
  AX_ATTR_LIVE_BUSY,
  AX_ATTR_ARIA_READONLY,
  AX_ATTR_CAN_SET_VALUE,
  AX_ATTR_UPDATE_LOCATION_ONLY,
  AX_ATTR_CANVAS_HAS_FALLBACK,
  AX_BOOL_ATTRIBUTE_LAST = AX_ATTR_CANVAS_HAS_FALLBACK,
};


std::string ToString(AXBoolAttribute as_enum);
AXBoolAttribute ParseAXBoolAttribute(const std::string& as_string);

enum AXIntListAttribute {
  AX_INT_LIST_ATTRIBUTE_NONE,
  AX_ATTR_INDIRECT_CHILD_IDS,
  AX_ATTR_CONTROLS_IDS,
  AX_ATTR_DESCRIBEDBY_IDS,
  AX_ATTR_FLOWTO_IDS,
  AX_ATTR_LABELLEDBY_IDS,
  AX_ATTR_LINE_BREAKS,
  AX_ATTR_CELL_IDS,
  AX_ATTR_UNIQUE_CELL_IDS,
  AX_ATTR_CHARACTER_OFFSETS,
  AX_ATTR_WORD_STARTS,
  AX_ATTR_WORD_ENDS,
  AX_INT_LIST_ATTRIBUTE_LAST = AX_ATTR_WORD_ENDS,
};


std::string ToString(AXIntListAttribute as_enum);
AXIntListAttribute ParseAXIntListAttribute(const std::string& as_string);

enum AXTextDirection {
  AX_TEXT_DIRECTION_NONE,
  AX_TEXT_DIRECTION_LTR,
  AX_TEXT_DIRECTION_RTL,
  AX_TEXT_DIRECTION_TTB,
  AX_TEXT_DIRECTION_BTT,
  AX_TEXT_DIRECTION_LAST = AX_TEXT_DIRECTION_BTT,
};


std::string ToString(AXTextDirection as_enum);
AXTextDirection ParseAXTextDirection(const std::string& as_string);

// A Java counterpart will be generated for this enum.
// GENERATED_JAVA_ENUM_PACKAGE: org.chromium.ui.accessibility
enum AXTextStyle {
  AX_TEXT_STYLE_NONE,
  AX_TEXT_STYLE_BOLD,
  AX_TEXT_STYLE_ITALIC,
  AX_TEXT_STYLE_UNDERLINE,
  AX_TEXT_STYLE_LINE_THROUGH,
  AX_TEXT_STYLE_LAST = AX_TEXT_STYLE_LINE_THROUGH,
};


std::string ToString(AXTextStyle as_enum);
AXTextStyle ParseAXTextStyle(const std::string& as_string);

enum AXInvalidState {
  AX_INVALID_STATE_NONE,
  AX_INVALID_STATE_FALSE,
  AX_INVALID_STATE_TRUE,
  AX_INVALID_STATE_SPELLING,
  AX_INVALID_STATE_GRAMMAR,
  AX_INVALID_STATE_OTHER,
  AX_INVALID_STATE_LAST = AX_INVALID_STATE_OTHER,
};


std::string ToString(AXInvalidState as_enum);
AXInvalidState ParseAXInvalidState(const std::string& as_string);

enum AXSortDirection {
  AX_SORT_DIRECTION_NONE,
  AX_SORT_DIRECTION_UNSORTED,
  AX_SORT_DIRECTION_ASCENDING,
  AX_SORT_DIRECTION_DESCENDING,
  AX_SORT_DIRECTION_OTHER,
  AX_SORT_DIRECTION_LAST = AX_SORT_DIRECTION_OTHER,
};


std::string ToString(AXSortDirection as_enum);
AXSortDirection ParseAXSortDirection(const std::string& as_string);

enum AXNameFrom {
  AX_NAME_FROM_NONE,
  AX_NAME_FROM_UNINITIALIZED,
  AX_NAME_FROM_ATTRIBUTE,
  AX_NAME_FROM_CONTENTS,
  AX_NAME_FROM_PLACEHOLDER,
  AX_NAME_FROM_RELATED_ELEMENT,
  AX_NAME_FROM_VALUE,
  AX_NAME_FROM_LAST = AX_NAME_FROM_VALUE,
};


std::string ToString(AXNameFrom as_enum);
AXNameFrom ParseAXNameFrom(const std::string& as_string);

enum AXDescriptionFrom {
  AX_DESCRIPTION_FROM_NONE,
  AX_DESCRIPTION_FROM_UNINITIALIZED,
  AX_DESCRIPTION_FROM_ATTRIBUTE,
  AX_DESCRIPTION_FROM_CONTENTS,
  AX_DESCRIPTION_FROM_PLACEHOLDER,
  AX_DESCRIPTION_FROM_RELATED_ELEMENT,
  AX_DESCRIPTION_FROM_LAST = AX_DESCRIPTION_FROM_RELATED_ELEMENT,
};


std::string ToString(AXDescriptionFrom as_enum);
AXDescriptionFrom ParseAXDescriptionFrom(const std::string& as_string);


}  // namespace ui
#endif  // UI_ACCESSIBILITY_AX_ENUMS_H__
