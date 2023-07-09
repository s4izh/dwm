static const unsigned int borderpx  = 0;        /* border pixel of windows */
static const unsigned int gappx     = 10;        /* gaps between windows */

static char normbgcolor[]           = "#000000";
static char normbordercolor[]       = "#444444";
static char normfgcolor[]           = "#f1f1f1";
static char selfgcolor[]            = "#7d8fa3";
static char selbordercolor[]        = "#f1f1f1";
static char selbgcolor[]            = "#000000";
static char *colors[][3] = {
       [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};
