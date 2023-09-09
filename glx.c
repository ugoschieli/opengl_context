#include "glx.h"

#include <X11/Xlib.h>
#include <stdio.h>

void printFBConfig(Display* dsp, GLXFBConfig fbc)
{
    int val;
    glXGetFBConfigAttrib(dsp, fbc, GLX_FBCONFIG_ID, &val);
    printf("GLX_FBCONFIG_ID: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_BUFFER_SIZE, &val);
    printf("GLX_BUFFER_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_LEVEL, &val);
    printf("GLX_LEVEL: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_DOUBLEBUFFER, &val);
    if (val)
    {
        printf("GLX_DOUBLEBUFFER: True\n");
    } else
    {
        printf("GLX_DOUBLEBUFFER: False\n");
    }
    glXGetFBConfigAttrib(dsp, fbc, GLX_STEREO, &val);
    if (val)
    {
        printf("GLX_STEREO: True\n");
    } else
    {
        printf("GLX_STEREO: False\n");
    }
    glXGetFBConfigAttrib(dsp, fbc, GLX_AUX_BUFFERS, &val);
    printf("GLX_AUX_BUFFERS: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_RED_SIZE, &val);
    printf("GLX_RED_SIZE: %d\n", val);    
    glXGetFBConfigAttrib(dsp, fbc, GLX_GREEN_SIZE, &val);
    printf("GLX_GREEN_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_BLUE_SIZE, &val);
    printf("GLX_BLUE_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_ALPHA_SIZE, &val);
    printf("GLX_ALPHA_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_DEPTH_SIZE, &val);
    printf("GLX_DEPTH_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_STENCIL_SIZE, &val);
    printf("GLX_STENCIL_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_ACCUM_RED_SIZE, &val);
    printf("GLX_ACCUM_RED_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_ACCUM_GREEN_SIZE, &val);
    printf("GLX_ACCUM_GREEN_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_ACCUM_BLUE_SIZE, &val);
    printf("GLX_ACCUM_BLUE_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_ACCUM_ALPHA_SIZE, &val);
    printf("GLX_ACCUM_ALPHA_SIZE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_SAMPLE_BUFFERS, &val);
    printf("GLX_SAMPLE_BUFFERS: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_SAMPLES, &val);
    printf("GLX_SAMPLES: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_RENDER_TYPE, &val);
    if (val == GLX_RGBA_BIT)
    {
        printf("GLX_RENDER_TYPE: GLX_RGBA_BIT\n");
    } else if (val == GLX_COLOR_INDEX_BIT)
    {
            printf("GLX_RENDER_TYPE: GLX_COLOR_INDEX_BIT\n");
    } else
    {
        printf("GLX_RENDER_TYPE: GLX_RGBA_BIT | GLX_COLOR_INDEX_BIT\n");
    }
    glXGetFBConfigAttrib(dsp, fbc, GLX_DRAWABLE_TYPE, &val);
    if (val == GLX_WINDOW_BIT)
    {
        printf("GLX_DRAWABLE_TYPE: GLX_WINDOW_BIT\n");
    } else if (val == (GLX_WINDOW_BIT | GLX_PIXMAP_BIT | GLX_PBUFFER_BIT))
    {
        printf("GLX_DRAWABLE_TYPE: GLX_WINDOW_BIT | GLX_PIXMAP_BIT | GLX_PBUFFER_BIT\n");
    } else
    {
        printf("GLX_DRAWABLE_TYPE: %d\n", val);
    }
    glXGetFBConfigAttrib(dsp, fbc, GLX_X_RENDERABLE, &val);
    if (val == 1)
    {
        printf("GLX_X_RENDERABLE: True\n");
    } else
    {
        printf("GLX_RENDERABLE: False\n");
    }
    glXGetFBConfigAttrib(dsp, fbc, GLX_X_VISUAL_TYPE, &val);
    if (val == GLX_TRUE_COLOR)
    {
        printf("GLX_X_VISUAL_TYPE: GLX_TRUE_COLOR\n");
    } else if (val == GLX_DIRECT_COLOR)
    {
        printf("GLX_X_VISUAL_TYPE: GLX_DIRECT_COLOR\n");
    } else if (val == GLX_PSEUDO_COLOR)
    {
        printf("GLX_X_VISUAL_TYPE: GLX_PSEUDO_COLOR\n");
    } else if (val == GLX_STATIC_COLOR)
    {
        printf("GLX_X_VISUAL_TYPE: GLX_STATIX_COLOR\n"); 
    } else if (val == GLX_GRAY_SCALE)
    {
        printf("GLX_X_VISUAL_TYPE: GLX_GRAY_SCALE\n");
    } else if (val == GLX_STATIC_GRAY)
    {
        printf("GLX_X_VISUAL_TYPE: GLX_STATIC_GRAY\n");
    } else {
        printf("GLX_X_VISUAL_TYPE: GLX_NONE\n");
    }
    glXGetFBConfigAttrib(dsp, fbc, GLX_CONFIG_CAVEAT, &val);
    if (val == GLX_NONE)
    {
        printf("GLX_CONFIG_CAVEAT: GLX_NONE\n");
    } else if (val == GLX_SLOW_CONFIG)
    {
        printf("GLX_CONFIG_CAVEAT: GLX_SLOW_CONFIG\n");
    } else {
        printf("GLX_CONFIG_CAVEAT: GLX_NON_CONFORMANT_CONFIG");
    }
    glXGetFBConfigAttrib(dsp, fbc, GLX_TRANSPARENT_TYPE, &val);
    if (val == GLX_NONE)
    {
        printf("GLX_TRANSPARENT_TYPE: GLX_NONE\n");
    } else if (val == GLX_TRANSPARENT_RGB)
    {
        printf("GLX_TRANSPARENT_TYPE: GLX_TRANSPARENT_RGB\n");
    } else {
        printf("GLX_TRANSPARENT_TYPE: GLX_TRANSPARENT_INDEX\n"); 
    }
    glXGetFBConfigAttrib(dsp, fbc, GLX_TRANSPARENT_INDEX_VALUE, &val);
    printf("GLX_TRANSPARENT_INDEX_VALUE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_TRANSPARENT_RED_VALUE, &val);
    printf("GLX_TRANSPARENT_RED_VALUE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_TRANSPARENT_GREEN_VALUE, &val);
    printf("GLX_TRANSPARENT_GREEN_VALUE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_TRANSPARENT_BLUE_VALUE, &val);
    printf("GLX_TRANSPARENT_BLUE_VALUE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_TRANSPARENT_ALPHA_VALUE, &val);
    printf("GLX_TRANSPARENT_ALPHA_VALUE: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_MAX_PBUFFER_WIDTH, &val);
    printf("GLX_MAX_PBUFFER_WIDTH: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_MAX_PBUFFER_HEIGHT, &val);
    printf("GLX_MAX_PBUFFER_HEIGHT: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_MAX_PBUFFER_PIXELS, &val);
    printf("GLX_MAX_PBUFFER_PIXELS: %d\n", val);
    glXGetFBConfigAttrib(dsp, fbc, GLX_VISUAL_ID, &val);
    printf("GLX_VISUAL_ID: %d\n", val);
}

GLXFBConfig createFBConfig(Display *dpy, int scr)
{
    int nfbc;
    const int fbc_attrs[] = {
        GLX_DOUBLEBUFFER, True,
        GLX_RED_SIZE, 8,
        GLX_GREEN_SIZE, 8,
        GLX_BLUE_SIZE, 8,
        GLX_ALPHA_SIZE, 8,
        GLX_DEPTH_SIZE, 24,
        GLX_STENCIL_SIZE, 8,
        GLX_RENDER_TYPE, GLX_RGBA_BIT,
        GLX_DRAWABLE_TYPE, GLX_WINDOW_BIT,
        GLX_X_RENDERABLE, True,
        GLX_X_VISUAL_TYPE, GLX_TRUE_COLOR,
        None,
    };

    GLXFBConfig* fbcs = glXChooseFBConfig(dpy, scr, fbc_attrs, &nfbc);

    GLXFBConfig fbc = fbcs[0];

    XFree(fbcs);
    return fbc;
}

Window createWindow(Display* dpy, int scr, GLXFBConfig fbc)
{
    XVisualInfo* vinfo = glXGetVisualFromFBConfig(dpy, fbc);

    XSetWindowAttributes swa = {
        .background_pixel = 0,
        .colormap = XCreateColormap(dpy, RootWindow(dpy, scr), vinfo->visual, AllocNone),
    };

    Window win = XCreateWindow(
            dpy,                      // Display
            RootWindow(dpy, scr),     // Parent Window
            0, 0,                     // Position
            800, 600,                 // Size
            0,                        // Border width
            vinfo->depth,             // Depth
            InputOutput,              // Class
            vinfo->visual,            // Visual
            CWBackPixel | CWColormap, // Window Attributes Mask
            &swa);                    // Window Attributes

    XFree(vinfo);

    Atom wmDeleteMessage = XInternAtom(dpy, "WM_DELETE_WINDOW", False);
    XSetWMProtocols(dpy, win, &wmDeleteMessage, 1);

    XMapWindow(dpy, win);
    XSync(dpy, False);

    return win;
}

GLXContext createContext(Display* dpy, GLXFBConfig fbc)
{
    const int ctx_attrs[] = {
        GLX_CONTEXT_MAJOR_VERSION_ARB, 4,
        GLX_CONTEXT_MINOR_VERSION_ARB, 6,
        None
    };

    PFNGLXCREATECONTEXTATTRIBSARBPROC glXCreateContextAttribsARB = (PFNGLXCREATECONTEXTATTRIBSARBPROC)glXGetProcAddressARB((const GLubyte *)"glXCreateContextAttribsARB");

    GLXContext ctx = glXCreateContextAttribsARB(dpy, fbc, NULL, True, ctx_attrs);

    return ctx;
}
