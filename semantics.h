typedef struct 
{
  double width;
  double height;
} page_size_t;

typedef struct
{
  int first; 
  int last;
 } range_t;

typedef struct
{
  double left;
  double right;
  double top;
  double bottom;
} crop_t;


typedef enum
{
  INPUT_MODIFIER_ALL,
  INPUT_MODIFIER_ODD,
  INPUT_MODIFIER_EVEN,
  INPUT_MODIFIER_TYPE_COUNT  /* must be last */
} input_modifier_type_t;


extern int line;  /* line number in spec file */


boolean parse_spec_file (char *fn);


/* semantic routines for input statements */
void input_push_context (void);
void input_pop_context (void);
void input_set_modifier_context (input_modifier_type_t type);
void input_set_file (char *name);
void input_set_rotation (int rotation);
void input_images (range_t range);

/* semantic routines for output statements */
void output_set_file (char *name);
void output_set_bookmark (char *name);
void output_set_page_number_format (char *format);
void output_pages (range_t range);