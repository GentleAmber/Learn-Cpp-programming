#include "physics.h"

/* vars definitions */
extern const double g{9.8};
extern const int c{299'792'458};
int nomeaning{1209};

double speed(double time) {
  return time * g;
}

double light_distance(double time) {
  return time * c;
}

int get_nomeaning() {
  return nomeaning;
}