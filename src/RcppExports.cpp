// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// myRange
arma::vec myRange(int start, int end);
RcppExport SEXP _invent_myRange(SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(myRange(start, end));
    return rcpp_result_gen;
END_RCPP
}
// callrgamma
NumericVector callrgamma(int n, double shape, double scale);
RcppExport SEXP _invent_callrgamma(SEXP nSEXP, SEXP shapeSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(callrgamma(n, shape, scale));
    return rcpp_result_gen;
END_RCPP
}
// set_seed
void set_seed(double seed);
RcppExport SEXP _invent_set_seed(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type seed(seedSEXP);
    set_seed(seed);
    return R_NilValue;
END_RCPP
}
// updateInterceptC
double updateInterceptC(arma::vec y, int nobs, arma::vec lp_noInt, double sigma);
RcppExport SEXP _invent_updateInterceptC(SEXP ySEXP, SEXP nobsSEXP, SEXP lp_noIntSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nobs(nobsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lp_noInt(lp_noIntSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(updateInterceptC(y, nobs, lp_noInt, sigma));
    return rcpp_result_gen;
END_RCPP
}
// update_mCsca
double update_mCsca(double xi);
RcppExport SEXP _invent_update_mCsca(SEXP xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type xi(xiSEXP);
    rcpp_result_gen = Rcpp::wrap(update_mCsca(xi));
    return rcpp_result_gen;
END_RCPP
}
// update_mCvec
arma::vec update_mCvec(arma::rowvec xi);
RcppExport SEXP _invent_update_mCvec(SEXP xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type xi(xiSEXP);
    rcpp_result_gen = Rcpp::wrap(update_mCvec(xi));
    return rcpp_result_gen;
END_RCPP
}
// update_tauC
double update_tauC(double at, double bt, double alpha, double gamma);
RcppExport SEXP _invent_update_tauC(SEXP atSEXP, SEXP btSEXP, SEXP alphaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type at(atSEXP);
    Rcpp::traits::input_parameter< double >::type bt(btSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(update_tauC(at, bt, alpha, gamma));
    return rcpp_result_gen;
END_RCPP
}
// deltaFNSC
int deltaFNSC(arma::vec x, double val);
RcppExport SEXP _invent_deltaFNSC(SEXP xSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type val(valSEXP);
    rcpp_result_gen = Rcpp::wrap(deltaFNSC(x, val));
    return rcpp_result_gen;
END_RCPP
}
// deltaFSC
int deltaFSC(arma::mat x, double val);
RcppExport SEXP _invent_deltaFSC(SEXP xSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type val(valSEXP);
    rcpp_result_gen = Rcpp::wrap(deltaFSC(x, val));
    return rcpp_result_gen;
END_RCPP
}
// update_piNSC
double update_piNSC(double ap, double bp, arma::vec gamma, double v0);
RcppExport SEXP _invent_update_piNSC(SEXP apSEXP, SEXP bpSEXP, SEXP gammaSEXP, SEXP v0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type ap(apSEXP);
    Rcpp::traits::input_parameter< double >::type bp(bpSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type v0(v0SEXP);
    rcpp_result_gen = Rcpp::wrap(update_piNSC(ap, bp, gamma, v0));
    return rcpp_result_gen;
END_RCPP
}
// update_piSC
double update_piSC(double ap, double bp, arma::mat gamma, double v0);
RcppExport SEXP _invent_update_piSC(SEXP apSEXP, SEXP bpSEXP, SEXP gammaSEXP, SEXP v0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type ap(apSEXP);
    Rcpp::traits::input_parameter< double >::type bp(bpSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type v0(v0SEXP);
    rcpp_result_gen = Rcpp::wrap(update_piSC(ap, bp, gamma, v0));
    return rcpp_result_gen;
END_RCPP
}
// update_sigmaC
double update_sigmaC(arma::colvec y, arma::colvec eta_pl, double as, double bs, int nobs);
RcppExport SEXP _invent_update_sigmaC(SEXP ySEXP, SEXP eta_plSEXP, SEXP asSEXP, SEXP bsSEXP, SEXP nobsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type eta_pl(eta_plSEXP);
    Rcpp::traits::input_parameter< double >::type as(asSEXP);
    Rcpp::traits::input_parameter< double >::type bs(bsSEXP);
    Rcpp::traits::input_parameter< int >::type nobs(nobsSEXP);
    rcpp_result_gen = Rcpp::wrap(update_sigmaC(y, eta_pl, as, bs, nobs));
    return rcpp_result_gen;
END_RCPP
}
// update_gammaScaC
double update_gammaScaC(double pi, double v0, double alpha, double tau);
RcppExport SEXP _invent_update_gammaScaC(SEXP piSEXP, SEXP v0SEXP, SEXP alphaSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pi(piSEXP);
    Rcpp::traits::input_parameter< double >::type v0(v0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(update_gammaScaC(pi, v0, alpha, tau));
    return rcpp_result_gen;
END_RCPP
}
// update_gammaVecC
arma::vec update_gammaVecC(double pi, double v0, arma::vec alpha, arma::vec tau);
RcppExport SEXP _invent_update_gammaVecC(SEXP piSEXP, SEXP v0SEXP, SEXP alphaSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pi(piSEXP);
    Rcpp::traits::input_parameter< double >::type v0(v0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(update_gammaVecC(pi, v0, alpha, tau));
    return rcpp_result_gen;
END_RCPP
}
// dnormLogVec
arma::vec dnormLogVec(arma::vec x, arma::vec means, double sds);
RcppExport SEXP _invent_dnormLogVec(SEXP xSEXP, SEXP meansSEXP, SEXP sdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type means(meansSEXP);
    Rcpp::traits::input_parameter< double >::type sds(sdsSEXP);
    rcpp_result_gen = Rcpp::wrap(dnormLogVec(x, means, sds));
    return rcpp_result_gen;
END_RCPP
}
// update_alphaC
List update_alphaC(arma::vec y, double sigma, double tau, double gamma, arma::vec eta_star, arma::vec eta_pl, double alpha_star, double alpha);
RcppExport SEXP _invent_update_alphaC(SEXP ySEXP, SEXP sigmaSEXP, SEXP tauSEXP, SEXP gammaSEXP, SEXP eta_starSEXP, SEXP eta_plSEXP, SEXP alpha_starSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type eta_star(eta_starSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type eta_pl(eta_plSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_star(alpha_starSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(update_alphaC(y, sigma, tau, gamma, eta_star, eta_pl, alpha_star, alpha));
    return rcpp_result_gen;
END_RCPP
}
// update_xiLC
List update_xiLC(arma::vec y, arma::colvec eta_star, arma::colvec eta_pl, double sigma, double m, double xi_star, double xi);
RcppExport SEXP _invent_update_xiLC(SEXP ySEXP, SEXP eta_starSEXP, SEXP eta_plSEXP, SEXP sigmaSEXP, SEXP mSEXP, SEXP xi_starSEXP, SEXP xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type eta_star(eta_starSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type eta_pl(eta_plSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type xi_star(xi_starSEXP);
    Rcpp::traits::input_parameter< double >::type xi(xiSEXP);
    rcpp_result_gen = Rcpp::wrap(update_xiLC(y, eta_star, eta_pl, sigma, m, xi_star, xi));
    return rcpp_result_gen;
END_RCPP
}
// update_xiNLC
List update_xiNLC(arma::vec y, arma::vec eta_star, arma::vec eta_pl, double sigma, arma::vec m, arma::vec xi_star, arma::vec xi);
RcppExport SEXP _invent_update_xiNLC(SEXP ySEXP, SEXP eta_starSEXP, SEXP eta_plSEXP, SEXP sigmaSEXP, SEXP mSEXP, SEXP xi_starSEXP, SEXP xiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type eta_star(eta_starSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type eta_pl(eta_plSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type xi_star(xi_starSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type xi(xiSEXP);
    rcpp_result_gen = Rcpp::wrap(update_xiNLC(y, eta_star, eta_pl, sigma, m, xi_star, xi));
    return rcpp_result_gen;
END_RCPP
}
// mysign
int mysign(double x);
RcppExport SEXP _invent_mysign(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(mysign(x));
    return rcpp_result_gen;
END_RCPP
}
// compLinPred
arma::vec compLinPred(int nobs, int p, arma::vec cd, double eta0, arma::mat X_l, arma::mat beta_l, arma::mat X_nl, arma::mat beta_nl);
RcppExport SEXP _invent_compLinPred(SEXP nobsSEXP, SEXP pSEXP, SEXP cdSEXP, SEXP eta0SEXP, SEXP X_lSEXP, SEXP beta_lSEXP, SEXP X_nlSEXP, SEXP beta_nlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nobs(nobsSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cd(cdSEXP);
    Rcpp::traits::input_parameter< double >::type eta0(eta0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_l(X_lSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta_l(beta_lSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_nl(X_nlSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta_nl(beta_nlSEXP);
    rcpp_result_gen = Rcpp::wrap(compLinPred(nobs, p, cd, eta0, X_l, beta_l, X_nl, beta_nl));
    return rcpp_result_gen;
END_RCPP
}
// bodyMCMC
List bodyMCMC(arma::vec y, int p, int nobs, arma::vec cd, arma::vec d, arma::mat X_l, arma::mat X_nl, arma::vec hyperpar, arma::vec mht, int iter, int burnin, int thin);
RcppExport SEXP _invent_bodyMCMC(SEXP ySEXP, SEXP pSEXP, SEXP nobsSEXP, SEXP cdSEXP, SEXP dSEXP, SEXP X_lSEXP, SEXP X_nlSEXP, SEXP hyperparSEXP, SEXP mhtSEXP, SEXP iterSEXP, SEXP burninSEXP, SEXP thinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nobs(nobsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cd(cdSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_l(X_lSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X_nl(X_nlSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type hyperpar(hyperparSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mht(mhtSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    rcpp_result_gen = Rcpp::wrap(bodyMCMC(y, p, nobs, cd, d, X_l, X_nl, hyperpar, mht, iter, burnin, thin));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_invent_myRange", (DL_FUNC) &_invent_myRange, 2},
    {"_invent_callrgamma", (DL_FUNC) &_invent_callrgamma, 3},
    {"_invent_set_seed", (DL_FUNC) &_invent_set_seed, 1},
    {"_invent_updateInterceptC", (DL_FUNC) &_invent_updateInterceptC, 4},
    {"_invent_update_mCsca", (DL_FUNC) &_invent_update_mCsca, 1},
    {"_invent_update_mCvec", (DL_FUNC) &_invent_update_mCvec, 1},
    {"_invent_update_tauC", (DL_FUNC) &_invent_update_tauC, 4},
    {"_invent_deltaFNSC", (DL_FUNC) &_invent_deltaFNSC, 2},
    {"_invent_deltaFSC", (DL_FUNC) &_invent_deltaFSC, 2},
    {"_invent_update_piNSC", (DL_FUNC) &_invent_update_piNSC, 4},
    {"_invent_update_piSC", (DL_FUNC) &_invent_update_piSC, 4},
    {"_invent_update_sigmaC", (DL_FUNC) &_invent_update_sigmaC, 5},
    {"_invent_update_gammaScaC", (DL_FUNC) &_invent_update_gammaScaC, 4},
    {"_invent_update_gammaVecC", (DL_FUNC) &_invent_update_gammaVecC, 4},
    {"_invent_dnormLogVec", (DL_FUNC) &_invent_dnormLogVec, 3},
    {"_invent_update_alphaC", (DL_FUNC) &_invent_update_alphaC, 8},
    {"_invent_update_xiLC", (DL_FUNC) &_invent_update_xiLC, 7},
    {"_invent_update_xiNLC", (DL_FUNC) &_invent_update_xiNLC, 7},
    {"_invent_mysign", (DL_FUNC) &_invent_mysign, 1},
    {"_invent_compLinPred", (DL_FUNC) &_invent_compLinPred, 8},
    {"_invent_bodyMCMC", (DL_FUNC) &_invent_bodyMCMC, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_invent(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
