static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int gappx     = 5;        /* gaps between windows */

static char normbgcolor[]           = "#171717";
static char normbordercolor[]       = "#444444";
static char normfgcolor[]           = "#bbbbbb";
static char selfgcolor[]            = "#7D8FA3";
static char selbordercolor[]        = "#bbbbbb";
static char selbgcolor[]            = "#171717";
static char *colors[][3] = {
       [SchemeNorm] = { normfgcolor, normbgcolor, normbgcolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor,  selbordercolor  },
};
