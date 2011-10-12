#include "wrap_isl.hpp"

namespace isl
{
#include "gen-wrap-part3.inc"
}

void islpy_expose_part3()
{
  import_gmpy();

  MAKE_WRAP(qpolynomial, QPolynomial);
  MAKE_WRAP(pw_qpolynomial, PwQPolynomial);
  MAKE_WRAP(qpolynomial_fold, QPolynomialFold);
  MAKE_WRAP(pw_qpolynomial_fold, PwQPolynomialFold);
  MAKE_WRAP(union_pw_qpolynomial, UnionPwQPolynomial);
  MAKE_WRAP(union_pw_qpolynomial_fold, UnionPwQPolynomialFold);
  MAKE_WRAP(term, Term);

  MAKE_WRAP(band, Band);
  MAKE_WRAP(schedule, Schedule);

  MAKE_WRAP(access_info, AccessInfo);
  MAKE_WRAP(flow, Flow);

#include "gen-expose-part3.inc"
}
