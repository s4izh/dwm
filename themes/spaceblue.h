static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int gappx     = 10;        /* gaps between windows */

static char normbgcolor[]           = "#000000";
static char normbordercolor[]       = "#444444";
static char normfgcolor[]           = "#bbbbbb";
static char selfgcolor[]            = "#8fafd7";
static char selbordercolor[]        = "#bbbbbb";
static char selbgcolor[]            = "#000000";
static char *colors[][3] = {
       [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};
