/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	/*"Bitstream Vera Sans Mono:size=16:bold:antialias"*/
	/*"mononoki Nerd Font Mono:size=12:bold:antialias"*/
	"Source Code Pro:size=10:bold:antialias"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c0c6e4", "#222222" },
	[SchemeSel] = { "#cec7bc", "#424d53" },
	[SchemeOut] = { "#cec7bc", "#424d53" },
        [SchemeSelHighlight] = { "#ff3e43", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static unsigned int border_width = 5;
