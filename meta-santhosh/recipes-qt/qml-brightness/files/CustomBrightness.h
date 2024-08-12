#ifndef CUSTOMBRIGHTNESS_H
#define CUSTOMBRIGHTNESS_H
#include <QtWaylandCompositor/QWaylandCompositor>
#include "custom_brightness_protocol_server.h"
#include <QObject>

class CustomBrightness : public QObject, public QtWaylandServer::custom_brightness
{
    Q_OBJECT
public:
    explicit CustomBrightness(struct wl_display *display) {
        init(display);
    }

signals:
};

#endif // CUSTOMBRIGHTNESS_H
