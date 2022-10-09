// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// bruteforce_knapsack
double bruteforce_knapsack(NumericMatrix set_of_weight, NumericMatrix set_of_profit, int W_max, int R_number);
RcppExport SEXP _Lab6_bruteforce_knapsack(SEXP set_of_weightSEXP, SEXP set_of_profitSEXP, SEXP W_maxSEXP, SEXP R_numberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type set_of_weight(set_of_weightSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type set_of_profit(set_of_profitSEXP);
    Rcpp::traits::input_parameter< int >::type W_max(W_maxSEXP);
    Rcpp::traits::input_parameter< int >::type R_number(R_numberSEXP);
    rcpp_result_gen = Rcpp::wrap(bruteforce_knapsack(set_of_weight, set_of_profit, W_max, R_number));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Lab6_bruteforce_knapsack", (DL_FUNC) &_Lab6_bruteforce_knapsack, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_Lab6(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}