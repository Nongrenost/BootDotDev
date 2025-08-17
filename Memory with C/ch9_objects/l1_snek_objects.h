  typedef enum {
    INTEGER,
  } snek_object_kind_t;

  typedef union SnekObjectData {
    int v_int;
  } snek_object_data_t;

  typedef struct SnekObjects
  {
    snek_object_data_t Data;
    snek_object_kind_t Kind;
  } snek_objects_t;
  