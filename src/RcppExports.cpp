// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// calc_FstStats
NumericMatrix calc_FstStats(const int& n_ind, const int& n_allele, const int& n_loc, const int& n_st, const double& ploidy, const IntegerVector& strata, const IntegerVector& locus, const IntegerMatrix& ind_allele_freq);
RcppExport SEXP _strataG_calc_FstStats(SEXP n_indSEXP, SEXP n_alleleSEXP, SEXP n_locSEXP, SEXP n_stSEXP, SEXP ploidySEXP, SEXP strataSEXP, SEXP locusSEXP, SEXP ind_allele_freqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n_ind(n_indSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_allele(n_alleleSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_loc(n_locSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_st(n_stSEXP);
    Rcpp::traits::input_parameter< const double& >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type locus(locusSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type ind_allele_freq(ind_allele_freqSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_FstStats(n_ind, n_allele, n_loc, n_st, ploidy, strata, locus, ind_allele_freq));
    return rcpp_result_gen;
END_RCPP
}
// calc_Phist
NumericVector calc_Phist(const int& n_ind, const int& n_allele, const int& n_st, const IntegerVector& strata, const IntegerMatrix& ind_allele_freq, const NumericMatrix& unit_dist, const NumericMatrix& hap_dist);
RcppExport SEXP _strataG_calc_Phist(SEXP n_indSEXP, SEXP n_alleleSEXP, SEXP n_stSEXP, SEXP strataSEXP, SEXP ind_allele_freqSEXP, SEXP unit_distSEXP, SEXP hap_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n_ind(n_indSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_allele(n_alleleSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_st(n_stSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type ind_allele_freq(ind_allele_freqSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type unit_dist(unit_distSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type hap_dist(hap_distSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_Phist(n_ind, n_allele, n_st, strata, ind_allele_freq, unit_dist, hap_dist));
    return rcpp_result_gen;
END_RCPP
}
// table2D_int
IntegerMatrix table2D_int(const IntegerVector& x, const IntegerVector& y);
RcppExport SEXP _strataG_table2D_int(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(table2D_int(x, y));
    return rcpp_result_gen;
END_RCPP
}
// makeLookupVec
IntegerVector makeLookupVec(const IntegerVector& x, const IntegerVector& y);
RcppExport SEXP _strataG_makeLookupVec(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(makeLookupVec(x, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_strataG_calc_FstStats", (DL_FUNC) &_strataG_calc_FstStats, 8},
    {"_strataG_calc_Phist", (DL_FUNC) &_strataG_calc_Phist, 7},
    {"_strataG_table2D_int", (DL_FUNC) &_strataG_table2D_int, 2},
    {"_strataG_makeLookupVec", (DL_FUNC) &_strataG_makeLookupVec, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_strataG(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
