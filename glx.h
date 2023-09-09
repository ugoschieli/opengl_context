#ifndef ZZ_GLX_H
#define ZZ_GLX_H

#include <GL/glx.h>
#include <X11/X.h>
#include <X11/Xlib.h>

void printFBConfig(Display* dsp, GLXFBConfig fbc);

GLXFBConfig createFBConfig(Display* dpy, int scr);

Window createWindow(Display* dpy, int scr, GLXFBConfig fbc);

GLXContext createContext(Display* dpy, GLXFBConfig fbc);

#endif // ZZ_GLX_H
