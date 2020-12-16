#ifndef OBJECT_H
# define OBJECT_H

# include <stdint.h>

# include "dims.h"
# include "dice.h"

class object{
public:
  char symbol;
  pair_t position;
  int32_t speed;
  uint32_t color;
  dice damage;
  int32_t hitpoints;
  int32_t dodge;
  int32_t defence;
  int32_t weight;
  int32_t value;
  int art;
  int32_t attrubute;


};
#endif
