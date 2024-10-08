/* Generated by wayland-scanner 1.23.90 */

#ifndef OPACITY_CLIENT_PROTOCOL_H
#define OPACITY_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_opacity The opacity protocol
 * @section page_ifaces_opacity Interfaces
 * - @subpage page_iface_opacity_manager - 
 */
struct opacity_manager;
struct wl_surface;

#ifndef OPACITY_MANAGER_INTERFACE
#define OPACITY_MANAGER_INTERFACE
/**
 * @page page_iface_opacity_manager opacity_manager
 * @section page_iface_opacity_manager_api API
 * See @ref iface_opacity_manager.
 */
/**
 * @defgroup iface_opacity_manager The opacity_manager interface
 */
extern const struct wl_interface opacity_manager_interface;
#endif

#define OPACITY_MANAGER_SET_OPACITY 0


/**
 * @ingroup iface_opacity_manager
 */
#define OPACITY_MANAGER_SET_OPACITY_SINCE_VERSION 1

/** @ingroup iface_opacity_manager */
static inline void
opacity_manager_set_user_data(struct opacity_manager *opacity_manager, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) opacity_manager, user_data);
}

/** @ingroup iface_opacity_manager */
static inline void *
opacity_manager_get_user_data(struct opacity_manager *opacity_manager)
{
	return wl_proxy_get_user_data((struct wl_proxy *) opacity_manager);
}

static inline uint32_t
opacity_manager_get_version(struct opacity_manager *opacity_manager)
{
	return wl_proxy_get_version((struct wl_proxy *) opacity_manager);
}

/** @ingroup iface_opacity_manager */
static inline void
opacity_manager_destroy(struct opacity_manager *opacity_manager)
{
	wl_proxy_destroy((struct wl_proxy *) opacity_manager);
}

/**
 * @ingroup iface_opacity_manager
 */
static inline void
opacity_manager_set_opacity(struct opacity_manager *opacity_manager, struct wl_surface *surface, wl_fixed_t opacity)
{
	wl_proxy_marshal_flags((struct wl_proxy *) opacity_manager,
			 OPACITY_MANAGER_SET_OPACITY, NULL, wl_proxy_get_version((struct wl_proxy *) opacity_manager), 0, surface, opacity);
}

#ifdef  __cplusplus
}
#endif

#endif
