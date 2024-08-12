/* Generated by wayland-scanner 1.23.90 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface wl_surface_interface;

static const struct wl_interface *opacity_types[] = {
	&wl_surface_interface,
	NULL,
};

static const struct wl_message opacity_manager_requests[] = {
	{ "set_opacity", "of", opacity_types + 0 },
};

WL_PRIVATE const struct wl_interface opacity_manager_interface = {
	"opacity_manager", 1,
	1, opacity_manager_requests,
	0, NULL,
};

