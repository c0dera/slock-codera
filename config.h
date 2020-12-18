/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",     /* after initialization */
	[INPUT] =  "#ebdbb2",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
	[CAPS] = "#cc241d",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time before dpms */
static const int monitortime = 5;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=13;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=3;

/* default message */
static const char * message = "Locked.";

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;

/* text color */
static const char * text_color = "#d8dee9";

/* text size */
static const char * font_name = "10x20";
