// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// using_openmp
bool using_openmp();
RcppExport SEXP _quantgenCR_using_openmp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(using_openmp());
    return rcpp_result_gen;
END_RCPP
}
// quantgen_trials_
List quantgen_trials_(const uint32_t& n_trials, const arma::vec& N0, const arma::vec& P0, const arma::mat& V0, const arma::mat& U0, const double& r, const double& a, const double& f, const double& b, const double& c, const double& m, const double& g, const double& etaN, const double& etaP, const double& sig2N, const double& sig2P, const double& delta, const double& delta2, const double& start_t, const double& max_t, const double& density_threshold, const double& precision, const uint32_t& n_cores, const bool& show_progress, const uint32_t& return_every);
RcppExport SEXP _quantgenCR_quantgen_trials_(SEXP n_trialsSEXP, SEXP N0SEXP, SEXP P0SEXP, SEXP V0SEXP, SEXP U0SEXP, SEXP rSEXP, SEXP aSEXP, SEXP fSEXP, SEXP bSEXP, SEXP cSEXP, SEXP mSEXP, SEXP gSEXP, SEXP etaNSEXP, SEXP etaPSEXP, SEXP sig2NSEXP, SEXP sig2PSEXP, SEXP deltaSEXP, SEXP delta2SEXP, SEXP start_tSEXP, SEXP max_tSEXP, SEXP density_thresholdSEXP, SEXP precisionSEXP, SEXP n_coresSEXP, SEXP show_progressSEXP, SEXP return_everySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t& >::type n_trials(n_trialsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type N0(N0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type P0(P0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V0(V0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U0(U0SEXP);
    Rcpp::traits::input_parameter< const double& >::type r(rSEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type f(fSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const double& >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const double& >::type etaN(etaNSEXP);
    Rcpp::traits::input_parameter< const double& >::type etaP(etaPSEXP);
    Rcpp::traits::input_parameter< const double& >::type sig2N(sig2NSEXP);
    Rcpp::traits::input_parameter< const double& >::type sig2P(sig2PSEXP);
    Rcpp::traits::input_parameter< const double& >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< const double& >::type delta2(delta2SEXP);
    Rcpp::traits::input_parameter< const double& >::type start_t(start_tSEXP);
    Rcpp::traits::input_parameter< const double& >::type max_t(max_tSEXP);
    Rcpp::traits::input_parameter< const double& >::type density_threshold(density_thresholdSEXP);
    Rcpp::traits::input_parameter< const double& >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type n_cores(n_coresSEXP);
    Rcpp::traits::input_parameter< const bool& >::type show_progress(show_progressSEXP);
    Rcpp::traits::input_parameter< const uint32_t& >::type return_every(return_everySEXP);
    rcpp_result_gen = Rcpp::wrap(quantgen_trials_(n_trials, N0, P0, V0, U0, r, a, f, b, c, m, g, etaN, etaP, sig2N, sig2P, delta, delta2, start_t, max_t, density_threshold, precision, n_cores, show_progress, return_every));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_quantgenCR_using_openmp", (DL_FUNC) &_quantgenCR_using_openmp, 0},
    {"_quantgenCR_quantgen_trials_", (DL_FUNC) &_quantgenCR_quantgen_trials_, 25},
    {NULL, NULL, 0}
};

RcppExport void R_init_quantgenCR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
