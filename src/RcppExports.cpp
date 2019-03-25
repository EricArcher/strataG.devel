// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// HoCalc
double HoCalc(int nInd, IntegerVector locus, int ploidy, IntegerVector strata, IntegerVector strataN);
RcppExport SEXP _strataG_HoCalc(SEXP nIndSEXP, SEXP locusSEXP, SEXP ploidySEXP, SEXP strataSEXP, SEXP strataNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nInd(nIndSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type locus(locusSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type strataN(strataNSEXP);
    rcpp_result_gen = Rcpp::wrap(HoCalc(nInd, locus, ploidy, strata, strataN));
    return rcpp_result_gen;
END_RCPP
}
// HsCalc
double HsCalc(NumericMatrix alleleFreq, int ploidy, IntegerVector strataN, double harmN, double Ho);
RcppExport SEXP _strataG_HsCalc(SEXP alleleFreqSEXP, SEXP ploidySEXP, SEXP strataNSEXP, SEXP harmNSEXP, SEXP HoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type alleleFreq(alleleFreqSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type strataN(strataNSEXP);
    Rcpp::traits::input_parameter< double >::type harmN(harmNSEXP);
    Rcpp::traits::input_parameter< double >::type Ho(HoSEXP);
    rcpp_result_gen = Rcpp::wrap(HsCalc(alleleFreq, ploidy, strataN, harmN, Ho));
    return rcpp_result_gen;
END_RCPP
}
// HtCalc
double HtCalc(NumericMatrix alleleFreq, int ploidy, IntegerVector strataN, double harmN, double Ho, double Hs);
RcppExport SEXP _strataG_HtCalc(SEXP alleleFreqSEXP, SEXP ploidySEXP, SEXP strataNSEXP, SEXP harmNSEXP, SEXP HoSEXP, SEXP HsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type alleleFreq(alleleFreqSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type strataN(strataNSEXP);
    Rcpp::traits::input_parameter< double >::type harmN(harmNSEXP);
    Rcpp::traits::input_parameter< double >::type Ho(HoSEXP);
    Rcpp::traits::input_parameter< double >::type Hs(HsSEXP);
    rcpp_result_gen = Rcpp::wrap(HtCalc(alleleFreq, ploidy, strataN, harmN, Ho, Hs));
    return rcpp_result_gen;
END_RCPP
}
// Hstats_C
NumericMatrix Hstats_C(IntegerMatrix loci, IntegerVector strata);
RcppExport SEXP _strataG_Hstats_C(SEXP lociSEXP, SEXP strataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type strata(strataSEXP);
    rcpp_result_gen = Rcpp::wrap(Hstats_C(loci, strata));
    return rcpp_result_gen;
END_RCPP
}
// getMaxInt
int getMaxInt(IntegerVector x);
RcppExport SEXP _strataG_getMaxInt(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(getMaxInt(x));
    return rcpp_result_gen;
END_RCPP
}
// table2D
IntegerMatrix table2D(IntegerVector x, IntegerVector y);
RcppExport SEXP _strataG_table2D(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(table2D(x, y));
    return rcpp_result_gen;
END_RCPP
}
// rowSumC
NumericVector rowSumC(NumericMatrix x);
RcppExport SEXP _strataG_rowSumC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rowSumC(x));
    return rcpp_result_gen;
END_RCPP
}
// colSumC
NumericVector colSumC(NumericMatrix x);
RcppExport SEXP _strataG_colSumC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(colSumC(x));
    return rcpp_result_gen;
END_RCPP
}
// colMeanC
NumericVector colMeanC(NumericMatrix x);
RcppExport SEXP _strataG_colMeanC(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(colMeanC(x));
    return rcpp_result_gen;
END_RCPP
}
// intOuterC
IntegerMatrix intOuterC(IntegerVector x, IntegerVector y);
RcppExport SEXP _strataG_intOuterC(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(intOuterC(x, y));
    return rcpp_result_gen;
END_RCPP
}
// numOuterC
NumericMatrix numOuterC(NumericVector x, NumericVector y);
RcppExport SEXP _strataG_numOuterC(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(numOuterC(x, y));
    return rcpp_result_gen;
END_RCPP
}
// idStart
int idStart(int id, int ploidy);
RcppExport SEXP _strataG_idStart(SEXP idSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    rcpp_result_gen = Rcpp::wrap(idStart(id, ploidy));
    return rcpp_result_gen;
END_RCPP
}
// idGenotype
IntegerVector idGenotype(IntegerVector locus, int id, int ploidy);
RcppExport SEXP _strataG_idGenotype(SEXP locusSEXP, SEXP idSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type locus(locusSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    rcpp_result_gen = Rcpp::wrap(idGenotype(locus, id, ploidy));
    return rcpp_result_gen;
END_RCPP
}
// calcStrataN
IntegerVector calcStrataN(IntegerVector locus, IntegerVector strata, int ploidy);
RcppExport SEXP _strataG_calcStrataN(SEXP locusSEXP, SEXP strataSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type locus(locusSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type strata(strataSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    rcpp_result_gen = Rcpp::wrap(calcStrataN(locus, strata, ploidy));
    return rcpp_result_gen;
END_RCPP
}
// statChi2_C
NumericVector statChi2_C(IntegerMatrix loci, IntegerMatrix strataMat);
RcppExport SEXP _strataG_statChi2_C(SEXP lociSEXP, SEXP strataMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type strataMat(strataMatSEXP);
    rcpp_result_gen = Rcpp::wrap(statChi2_C(loci, strataMat));
    return rcpp_result_gen;
END_RCPP
}
// statFis_C
NumericVector statFis_C(IntegerMatrix loci, IntegerMatrix strataMat);
RcppExport SEXP _strataG_statFis_C(SEXP lociSEXP, SEXP strataMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type strataMat(strataMatSEXP);
    rcpp_result_gen = Rcpp::wrap(statFis_C(loci, strataMat));
    return rcpp_result_gen;
END_RCPP
}
// statFst_C
NumericVector statFst_C(IntegerMatrix loci, IntegerMatrix strataMat);
RcppExport SEXP _strataG_statFst_C(SEXP lociSEXP, SEXP strataMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type strataMat(strataMatSEXP);
    rcpp_result_gen = Rcpp::wrap(statFst_C(loci, strataMat));
    return rcpp_result_gen;
END_RCPP
}
// statFstPrime_C
NumericVector statFstPrime_C(IntegerMatrix loci, IntegerMatrix strataMat);
RcppExport SEXP _strataG_statFstPrime_C(SEXP lociSEXP, SEXP strataMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type strataMat(strataMatSEXP);
    rcpp_result_gen = Rcpp::wrap(statFstPrime_C(loci, strataMat));
    return rcpp_result_gen;
END_RCPP
}
// statGst_C
NumericVector statGst_C(IntegerMatrix loci, IntegerMatrix strataMat);
RcppExport SEXP _strataG_statGst_C(SEXP lociSEXP, SEXP strataMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type strataMat(strataMatSEXP);
    rcpp_result_gen = Rcpp::wrap(statGst_C(loci, strataMat));
    return rcpp_result_gen;
END_RCPP
}
// statGstPrime_C
NumericVector statGstPrime_C(IntegerMatrix loci, IntegerMatrix strataMat, int primeType);
RcppExport SEXP _strataG_statGstPrime_C(SEXP lociSEXP, SEXP strataMatSEXP, SEXP primeTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type strataMat(strataMatSEXP);
    Rcpp::traits::input_parameter< int >::type primeType(primeTypeSEXP);
    rcpp_result_gen = Rcpp::wrap(statGstPrime_C(loci, strataMat, primeType));
    return rcpp_result_gen;
END_RCPP
}
// statGstDblPrime_C
NumericVector statGstDblPrime_C(IntegerMatrix loci, IntegerMatrix strataMat);
RcppExport SEXP _strataG_statGstDblPrime_C(SEXP lociSEXP, SEXP strataMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type strataMat(strataMatSEXP);
    rcpp_result_gen = Rcpp::wrap(statGstDblPrime_C(loci, strataMat));
    return rcpp_result_gen;
END_RCPP
}
// statJostD_C
NumericVector statJostD_C(IntegerMatrix loci, IntegerMatrix strataMat);
RcppExport SEXP _strataG_statJostD_C(SEXP lociSEXP, SEXP strataMatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type loci(lociSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type strataMat(strataMatSEXP);
    rcpp_result_gen = Rcpp::wrap(statJostD_C(loci, strataMat));
    return rcpp_result_gen;
END_RCPP
}
// statPhist_C
NumericVector statPhist_C(IntegerMatrix hapMat, IntegerMatrix strataMat, List hapDist);
RcppExport SEXP _strataG_statPhist_C(SEXP hapMatSEXP, SEXP strataMatSEXP, SEXP hapDistSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type hapMat(hapMatSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type strataMat(strataMatSEXP);
    Rcpp::traits::input_parameter< List >::type hapDist(hapDistSEXP);
    rcpp_result_gen = Rcpp::wrap(statPhist_C(hapMat, strataMat, hapDist));
    return rcpp_result_gen;
END_RCPP
}