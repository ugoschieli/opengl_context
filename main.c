#include "glx.h"

#include <X11/Xutil.h>
#include <GL/glxext.h>
#include <GL/gl.h>

#include <stdbool.h>
#include <stdio.h>


int main()
{
    Display* dpy = XOpenDisplay(NULL);
    int scr = DefaultScreen(dpy);

    GLXFBConfig fbc = createFBConfig(dpy, scr);

    Window win = createWindow(dpy, scr, fbc);

    Atom wmDeleteMessage = XInternAtom(dpy, "WM_DELETE_WINDOW", False);
    XSetWMProtocols(dpy, win, &wmDeleteMessage, 1);

    GLXContext ctx = createContext(dpy, fbc);
    glXMakeCurrent(dpy, win, ctx);

    bool running = true;
    XEvent event;
    while (running)
    {
        XNextEvent(dpy, &event);
        switch (event.type)
        {
            case ClientMessage:
                if ((unsigned long)event.xclient.data.l[0] == wmDeleteMessage)
                {
                    running = false;
                }
            default:
                break;
        }
    }
    glXDestroyContext(dpy, ctx);
    XDestroyWindow(dpy, win);

    XCloseDisplay(dpy);
    return 0;
}
