// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// diate_erode
arma::mat diate_erode(arma::mat image, arma::rowvec Filter, int method, int threads);
RcppExport SEXP OpenImageR_diate_erode(SEXP imageSEXP, SEXP FilterSEXP, SEXP methodSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type image(imageSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type Filter(FilterSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(diate_erode(image, Filter, method, threads));
    return rcpp_result_gen;
END_RCPP
}
// diate_erode_cube
arma::cube diate_erode_cube(arma::cube image, arma::rowvec Filter, int method, int threads);
RcppExport SEXP OpenImageR_diate_erode_cube(SEXP imageSEXP, SEXP FilterSEXP, SEXP methodSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type image(imageSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type Filter(FilterSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(diate_erode_cube(image, Filter, method, threads));
    return rcpp_result_gen;
END_RCPP
}
// rgb_2gray
arma::mat rgb_2gray(arma::cube RGB_image);
RcppExport SEXP OpenImageR_rgb_2gray(SEXP RGB_imageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type RGB_image(RGB_imageSEXP);
    rcpp_result_gen = Rcpp::wrap(rgb_2gray(RGB_image));
    return rcpp_result_gen;
END_RCPP
}
// hog_cpp
arma::rowvec hog_cpp(arma::mat image, int n_divs, int n_bins);
RcppExport SEXP OpenImageR_hog_cpp(SEXP imageSEXP, SEXP n_divsSEXP, SEXP n_binsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type image(imageSEXP);
    Rcpp::traits::input_parameter< int >::type n_divs(n_divsSEXP);
    Rcpp::traits::input_parameter< int >::type n_bins(n_binsSEXP);
    rcpp_result_gen = Rcpp::wrap(hog_cpp(image, n_divs, n_bins));
    return rcpp_result_gen;
END_RCPP
}
// HOG_matrix
arma::mat HOG_matrix(arma::mat x, int height, int width, int n_divs, int n_bins, int threads);
RcppExport SEXP OpenImageR_HOG_matrix(SEXP xSEXP, SEXP heightSEXP, SEXP widthSEXP, SEXP n_divsSEXP, SEXP n_binsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type n_divs(n_divsSEXP);
    Rcpp::traits::input_parameter< int >::type n_bins(n_binsSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(HOG_matrix(x, height, width, n_divs, n_bins, threads));
    return rcpp_result_gen;
END_RCPP
}
// HOG_array
arma::mat HOG_array(arma::cube x, int n_divs, int n_bins, int threads);
RcppExport SEXP OpenImageR_HOG_array(SEXP xSEXP, SEXP n_divsSEXP, SEXP n_binsSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n_divs(n_divsSEXP);
    Rcpp::traits::input_parameter< int >::type n_bins(n_binsSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(HOG_array(x, n_divs, n_bins, threads));
    return rcpp_result_gen;
END_RCPP
}
// round_rcpp
float round_rcpp(float f, int decimal_places);
RcppExport SEXP OpenImageR_round_rcpp(SEXP fSEXP, SEXP decimal_placesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type f(fSEXP);
    Rcpp::traits::input_parameter< int >::type decimal_places(decimal_placesSEXP);
    rcpp_result_gen = Rcpp::wrap(round_rcpp(f, decimal_places));
    return rcpp_result_gen;
END_RCPP
}
// binary_to_hex
std::string binary_to_hex(arma::mat x);
RcppExport SEXP OpenImageR_binary_to_hex(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(binary_to_hex(x));
    return rcpp_result_gen;
END_RCPP
}
// levenshtein_dist
int levenshtein_dist(std::string s, std::string t);
RcppExport SEXP OpenImageR_levenshtein_dist(SEXP sSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    Rcpp::traits::input_parameter< std::string >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(levenshtein_dist(s, t));
    return rcpp_result_gen;
END_RCPP
}
// func_dct
arma::vec func_dct(arma::vec x);
RcppExport SEXP OpenImageR_func_dct(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(func_dct(x));
    return rcpp_result_gen;
END_RCPP
}
// dct_2d
arma::mat dct_2d(arma::mat x);
RcppExport SEXP OpenImageR_dct_2d(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(dct_2d(x));
    return rcpp_result_gen;
END_RCPP
}
// phash_binary
arma::rowvec phash_binary(arma::mat gray_image, int hash_size, int highfreq_factor, std::string resize_method);
RcppExport SEXP OpenImageR_phash_binary(SEXP gray_imageSEXP, SEXP hash_sizeSEXP, SEXP highfreq_factorSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type gray_image(gray_imageSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type highfreq_factor(highfreq_factorSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(phash_binary(gray_image, hash_size, highfreq_factor, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// phash_string
arma::mat phash_string(arma::mat gray_image, int hash_size, int highfreq_factor, std::string resize_method);
RcppExport SEXP OpenImageR_phash_string(SEXP gray_imageSEXP, SEXP hash_sizeSEXP, SEXP highfreq_factorSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type gray_image(gray_imageSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type highfreq_factor(highfreq_factorSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(phash_string(gray_image, hash_size, highfreq_factor, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// average_hash_binary
arma::rowvec average_hash_binary(arma::mat gray_image, int hash_size, std::string resize_method);
RcppExport SEXP OpenImageR_average_hash_binary(SEXP gray_imageSEXP, SEXP hash_sizeSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type gray_image(gray_imageSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(average_hash_binary(gray_image, hash_size, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// average_hash_string
arma::mat average_hash_string(arma::mat gray_image, int hash_size, std::string resize_method);
RcppExport SEXP OpenImageR_average_hash_string(SEXP gray_imageSEXP, SEXP hash_sizeSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type gray_image(gray_imageSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(average_hash_string(gray_image, hash_size, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// dhash_binary
arma::rowvec dhash_binary(arma::mat gray_image, int hash_size, std::string resize_method);
RcppExport SEXP OpenImageR_dhash_binary(SEXP gray_imageSEXP, SEXP hash_sizeSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type gray_image(gray_imageSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(dhash_binary(gray_image, hash_size, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// dhash_string
arma::mat dhash_string(arma::mat gray_image, int hash_size, std::string resize_method);
RcppExport SEXP OpenImageR_dhash_string(SEXP gray_imageSEXP, SEXP hash_sizeSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type gray_image(gray_imageSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(dhash_string(gray_image, hash_size, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// hash_image
arma::mat hash_image(arma::mat x, int new_width, int new_height, int hash_size, int highfreq_factor, int method, int threads, std::string resize_method);
RcppExport SEXP OpenImageR_hash_image(SEXP xSEXP, SEXP new_widthSEXP, SEXP new_heightSEXP, SEXP hash_sizeSEXP, SEXP highfreq_factorSEXP, SEXP methodSEXP, SEXP threadsSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type new_width(new_widthSEXP);
    Rcpp::traits::input_parameter< int >::type new_height(new_heightSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type highfreq_factor(highfreq_factorSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(hash_image(x, new_width, new_height, hash_size, highfreq_factor, method, threads, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// hash_image_cube
arma::mat hash_image_cube(arma::cube x, int hash_size, int highfreq_factor, int method, int threads, std::string resize_method);
RcppExport SEXP OpenImageR_hash_image_cube(SEXP xSEXP, SEXP hash_sizeSEXP, SEXP highfreq_factorSEXP, SEXP methodSEXP, SEXP threadsSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type highfreq_factor(highfreq_factorSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(hash_image_cube(x, hash_size, highfreq_factor, method, threads, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// list_2array_convert
arma::cube list_2array_convert(Rcpp::List x);
RcppExport SEXP OpenImageR_list_2array_convert(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(list_2array_convert(x));
    return rcpp_result_gen;
END_RCPP
}
// hash_image_hex
std::vector<std::string> hash_image_hex(arma::mat x, int new_width, int new_height, int hash_size, int highfreq_factor, int method, int threads, std::string resize_method);
RcppExport SEXP OpenImageR_hash_image_hex(SEXP xSEXP, SEXP new_widthSEXP, SEXP new_heightSEXP, SEXP hash_sizeSEXP, SEXP highfreq_factorSEXP, SEXP methodSEXP, SEXP threadsSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type new_width(new_widthSEXP);
    Rcpp::traits::input_parameter< int >::type new_height(new_heightSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type highfreq_factor(highfreq_factorSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(hash_image_hex(x, new_width, new_height, hash_size, highfreq_factor, method, threads, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// hash_image_cube_hex
std::vector<std::string> hash_image_cube_hex(arma::cube x, int hash_size, int highfreq_factor, int method, int threads, std::string resize_method);
RcppExport SEXP OpenImageR_hash_image_cube_hex(SEXP xSEXP, SEXP hash_sizeSEXP, SEXP highfreq_factorSEXP, SEXP methodSEXP, SEXP threadsSEXP, SEXP resize_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type hash_size(hash_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type highfreq_factor(highfreq_factorSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< std::string >::type resize_method(resize_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(hash_image_cube_hex(x, hash_size, highfreq_factor, method, threads, resize_method));
    return rcpp_result_gen;
END_RCPP
}
// mod
int mod(int a, int b);
RcppExport SEXP OpenImageR_mod(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(mod(a, b));
    return rcpp_result_gen;
END_RCPP
}
// indices
arma::mat indices(int rows, int cols);
RcppExport SEXP OpenImageR_indices(SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(indices(rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// vec2mat
arma::mat vec2mat(arma::rowvec V, int mat_rows, int mat_cols);
RcppExport SEXP OpenImageR_vec2mat(SEXP VSEXP, SEXP mat_rowsSEXP, SEXP mat_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type V(VSEXP);
    Rcpp::traits::input_parameter< int >::type mat_rows(mat_rowsSEXP);
    Rcpp::traits::input_parameter< int >::type mat_cols(mat_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(vec2mat(V, mat_rows, mat_cols));
    return rcpp_result_gen;
END_RCPP
}
// seq_rcpp
arma::vec seq_rcpp(int x);
RcppExport SEXP OpenImageR_seq_rcpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(seq_rcpp(x));
    return rcpp_result_gen;
END_RCPP
}
// resize_nearest_rcpp
arma::mat resize_nearest_rcpp(arma::mat image, double width, double height);
RcppExport SEXP OpenImageR_resize_nearest_rcpp(SEXP imageSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type image(imageSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(resize_nearest_rcpp(image, width, height));
    return rcpp_result_gen;
END_RCPP
}
// resize_nearest_array
arma::cube resize_nearest_array(arma::cube image, double width, double height);
RcppExport SEXP OpenImageR_resize_nearest_array(SEXP imageSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type image(imageSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(resize_nearest_array(image, width, height));
    return rcpp_result_gen;
END_RCPP
}
// indices_bilinear
arma::mat indices_bilinear(int rows, int cols);
RcppExport SEXP OpenImageR_indices_bilinear(SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(indices_bilinear(rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// meshgrid_x
arma::mat meshgrid_x(int rows, int cols);
RcppExport SEXP OpenImageR_meshgrid_x(SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(meshgrid_x(rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// meshgrid_y
arma::mat meshgrid_y(int rows, int cols);
RcppExport SEXP OpenImageR_meshgrid_y(SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(meshgrid_y(rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// replaceVal
arma::mat replaceVal(arma::mat x, double thresh, double value, int mode);
RcppExport SEXP OpenImageR_replaceVal(SEXP xSEXP, SEXP threshSEXP, SEXP valueSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type thresh(threshSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(replaceVal(x, thresh, value, mode));
    return rcpp_result_gen;
END_RCPP
}
// vec2mat_colwise
arma::mat vec2mat_colwise(arma::rowvec VEC, int mat_rows, int mat_cols);
RcppExport SEXP OpenImageR_vec2mat_colwise(SEXP VECSEXP, SEXP mat_rowsSEXP, SEXP mat_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type VEC(VECSEXP);
    Rcpp::traits::input_parameter< int >::type mat_rows(mat_rowsSEXP);
    Rcpp::traits::input_parameter< int >::type mat_cols(mat_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(vec2mat_colwise(VEC, mat_rows, mat_cols));
    return rcpp_result_gen;
END_RCPP
}
// Vectz
arma::rowvec Vectz(arma::mat x);
RcppExport SEXP OpenImageR_Vectz(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Vectz(x));
    return rcpp_result_gen;
END_RCPP
}
// resize_bilinear_rcpp
arma::mat resize_bilinear_rcpp(arma::mat image, double width, double height);
RcppExport SEXP OpenImageR_resize_bilinear_rcpp(SEXP imageSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type image(imageSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(resize_bilinear_rcpp(image, width, height));
    return rcpp_result_gen;
END_RCPP
}
// bilinear_array
arma::cube bilinear_array(arma::cube image, double width, double height);
RcppExport SEXP OpenImageR_bilinear_array(SEXP imageSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type image(imageSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(bilinear_array(image, width, height));
    return rcpp_result_gen;
END_RCPP
}
// Array_range
arma::rowvec Array_range(arma::cube x, int mode);
RcppExport SEXP OpenImageR_Array_range(SEXP xSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(Array_range(x, mode));
    return rcpp_result_gen;
END_RCPP
}
// Normalize_array
arma::cube Normalize_array(arma::cube x);
RcppExport SEXP OpenImageR_Normalize_array(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Normalize_array(x));
    return rcpp_result_gen;
END_RCPP
}
// Normalize_matrix
arma::mat Normalize_matrix(arma::mat x);
RcppExport SEXP OpenImageR_Normalize_matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Normalize_matrix(x));
    return rcpp_result_gen;
END_RCPP
}
// rotate_rcpp
arma::mat rotate_rcpp(arma::mat image, int angle);
RcppExport SEXP OpenImageR_rotate_rcpp(SEXP imageSEXP, SEXP angleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type image(imageSEXP);
    Rcpp::traits::input_parameter< int >::type angle(angleSEXP);
    rcpp_result_gen = Rcpp::wrap(rotate_rcpp(image, angle));
    return rcpp_result_gen;
END_RCPP
}
// seq_rcpp_range
arma::uvec seq_rcpp_range(int start, int end);
RcppExport SEXP OpenImageR_seq_rcpp_range(SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type start(startSEXP);
    Rcpp::traits::input_parameter< int >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(seq_rcpp_range(start, end));
    return rcpp_result_gen;
END_RCPP
}
// rotate_nearest_bilinear
arma::mat rotate_nearest_bilinear(arma::mat image, double angle, std::string method, std::string mode, int threads);
RcppExport SEXP OpenImageR_rotate_nearest_bilinear(SEXP imageSEXP, SEXP angleSEXP, SEXP methodSEXP, SEXP modeSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type image(imageSEXP);
    Rcpp::traits::input_parameter< double >::type angle(angleSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< std::string >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(rotate_nearest_bilinear(image, angle, method, mode, threads));
    return rcpp_result_gen;
END_RCPP
}
// rotate_nearest_bilinear_array_same
arma::cube rotate_nearest_bilinear_array_same(arma::cube src, double angle, std::string method, int threads);
RcppExport SEXP OpenImageR_rotate_nearest_bilinear_array_same(SEXP srcSEXP, SEXP angleSEXP, SEXP methodSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type src(srcSEXP);
    Rcpp::traits::input_parameter< double >::type angle(angleSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(rotate_nearest_bilinear_array_same(src, angle, method, threads));
    return rcpp_result_gen;
END_RCPP
}
// rotate_nearest_bilinear_array_full
arma::cube rotate_nearest_bilinear_array_full(arma::cube src, double angle, std::string method, int threads);
RcppExport SEXP OpenImageR_rotate_nearest_bilinear_array_full(SEXP srcSEXP, SEXP angleSEXP, SEXP methodSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type src(srcSEXP);
    Rcpp::traits::input_parameter< double >::type angle(angleSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(rotate_nearest_bilinear_array_full(src, angle, method, threads));
    return rcpp_result_gen;
END_RCPP
}
// conv2d
arma::mat conv2d(arma::mat image, arma::mat kernel, std::string mode);
RcppExport SEXP OpenImageR_conv2d(SEXP imageSEXP, SEXP kernelSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type image(imageSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< std::string >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(conv2d(image, kernel, mode));
    return rcpp_result_gen;
END_RCPP
}
// conv3d
arma::cube conv3d(arma::cube image, arma::mat kernel, std::string mode);
RcppExport SEXP OpenImageR_conv3d(SEXP imageSEXP, SEXP kernelSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type image(imageSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< std::string >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(conv3d(image, kernel, mode));
    return rcpp_result_gen;
END_RCPP
}
// svd_arma_econ
arma::mat svd_arma_econ(arma::mat m);
RcppExport SEXP OpenImageR_svd_arma_econ(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(svd_arma_econ(m));
    return rcpp_result_gen;
END_RCPP
}
// removeMean
arma::mat removeMean(arma::mat data);
RcppExport SEXP OpenImageR_removeMean(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(removeMean(data));
    return rcpp_result_gen;
END_RCPP
}
// zca_whitening
arma::mat zca_whitening(arma::mat data, int k, double epsilon);
RcppExport SEXP OpenImageR_zca_whitening(SEXP dataSEXP, SEXP kSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(zca_whitening(data, k, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// zca_whiten_cube
arma::cube zca_whiten_cube(arma::cube src, int k, double epsilon);
RcppExport SEXP OpenImageR_zca_whiten_cube(SEXP srcSEXP, SEXP kSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type src(srcSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(zca_whiten_cube(src, k, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// im_flip
arma::mat im_flip(arma::mat x, int mode);
RcppExport SEXP OpenImageR_im_flip(SEXP xSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(im_flip(x, mode));
    return rcpp_result_gen;
END_RCPP
}
// im_flip_cube
arma::cube im_flip_cube(arma::cube src, int mode);
RcppExport SEXP OpenImageR_im_flip_cube(SEXP srcSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type src(srcSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(im_flip_cube(src, mode));
    return rcpp_result_gen;
END_RCPP
}
// translation_mat
arma::mat translation_mat(arma::mat& image, int shift_rows, int shift_cols);
RcppExport SEXP OpenImageR_translation_mat(SEXP imageSEXP, SEXP shift_rowsSEXP, SEXP shift_colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type image(imageSEXP);
    Rcpp::traits::input_parameter< int >::type shift_rows(shift_rowsSEXP);
    Rcpp::traits::input_parameter< int >::type shift_cols(shift_colsSEXP);
    rcpp_result_gen = Rcpp::wrap(translation_mat(image, shift_rows, shift_cols));
    return rcpp_result_gen;
END_RCPP
}
// augment_transf
arma::mat augment_transf(arma::mat& image, std::string flip_mode, arma::uvec crop_height, arma::uvec crop_width, double resiz_width, double resiz_height, std::string resiz_method, double shift_rows, double shift_cols, double rotate_angle, std::string rotate_method, int zca_comps, double zca_epsilon, double image_thresh);
RcppExport SEXP OpenImageR_augment_transf(SEXP imageSEXP, SEXP flip_modeSEXP, SEXP crop_heightSEXP, SEXP crop_widthSEXP, SEXP resiz_widthSEXP, SEXP resiz_heightSEXP, SEXP resiz_methodSEXP, SEXP shift_rowsSEXP, SEXP shift_colsSEXP, SEXP rotate_angleSEXP, SEXP rotate_methodSEXP, SEXP zca_compsSEXP, SEXP zca_epsilonSEXP, SEXP image_threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type image(imageSEXP);
    Rcpp::traits::input_parameter< std::string >::type flip_mode(flip_modeSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type crop_height(crop_heightSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type crop_width(crop_widthSEXP);
    Rcpp::traits::input_parameter< double >::type resiz_width(resiz_widthSEXP);
    Rcpp::traits::input_parameter< double >::type resiz_height(resiz_heightSEXP);
    Rcpp::traits::input_parameter< std::string >::type resiz_method(resiz_methodSEXP);
    Rcpp::traits::input_parameter< double >::type shift_rows(shift_rowsSEXP);
    Rcpp::traits::input_parameter< double >::type shift_cols(shift_colsSEXP);
    Rcpp::traits::input_parameter< double >::type rotate_angle(rotate_angleSEXP);
    Rcpp::traits::input_parameter< std::string >::type rotate_method(rotate_methodSEXP);
    Rcpp::traits::input_parameter< int >::type zca_comps(zca_compsSEXP);
    Rcpp::traits::input_parameter< double >::type zca_epsilon(zca_epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type image_thresh(image_threshSEXP);
    rcpp_result_gen = Rcpp::wrap(augment_transf(image, flip_mode, crop_height, crop_width, resiz_width, resiz_height, resiz_method, shift_rows, shift_cols, rotate_angle, rotate_method, zca_comps, zca_epsilon, image_thresh));
    return rcpp_result_gen;
END_RCPP
}
// augment_transf_array
arma::cube augment_transf_array(arma::cube& image, std::string flip_mode, arma::uvec crop_height, arma::uvec crop_width, double resiz_width, double resiz_height, std::string resiz_method, double shift_rows, double shift_cols, double rotate_angle, std::string rotate_method, int zca_comps, double zca_epsilon, double image_thresh, int threads);
RcppExport SEXP OpenImageR_augment_transf_array(SEXP imageSEXP, SEXP flip_modeSEXP, SEXP crop_heightSEXP, SEXP crop_widthSEXP, SEXP resiz_widthSEXP, SEXP resiz_heightSEXP, SEXP resiz_methodSEXP, SEXP shift_rowsSEXP, SEXP shift_colsSEXP, SEXP rotate_angleSEXP, SEXP rotate_methodSEXP, SEXP zca_compsSEXP, SEXP zca_epsilonSEXP, SEXP image_threshSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type image(imageSEXP);
    Rcpp::traits::input_parameter< std::string >::type flip_mode(flip_modeSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type crop_height(crop_heightSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type crop_width(crop_widthSEXP);
    Rcpp::traits::input_parameter< double >::type resiz_width(resiz_widthSEXP);
    Rcpp::traits::input_parameter< double >::type resiz_height(resiz_heightSEXP);
    Rcpp::traits::input_parameter< std::string >::type resiz_method(resiz_methodSEXP);
    Rcpp::traits::input_parameter< double >::type shift_rows(shift_rowsSEXP);
    Rcpp::traits::input_parameter< double >::type shift_cols(shift_colsSEXP);
    Rcpp::traits::input_parameter< double >::type rotate_angle(rotate_angleSEXP);
    Rcpp::traits::input_parameter< std::string >::type rotate_method(rotate_methodSEXP);
    Rcpp::traits::input_parameter< int >::type zca_comps(zca_compsSEXP);
    Rcpp::traits::input_parameter< double >::type zca_epsilon(zca_epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type image_thresh(image_threshSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(augment_transf_array(image, flip_mode, crop_height, crop_width, resiz_width, resiz_height, resiz_method, shift_rows, shift_cols, rotate_angle, rotate_method, zca_comps, zca_epsilon, image_thresh, threads));
    return rcpp_result_gen;
END_RCPP
}
// augment_array_list
Rcpp::List augment_array_list(Rcpp::List x, std::string flip_mode, arma::uvec crop_height, arma::uvec crop_width, double resiz_width, double resiz_height, std::string resiz_method, double shift_rows, double shift_cols, double rotate_angle, std::string rotate_method, int zca_comps, double zca_epsilon, double image_thresh);
RcppExport SEXP OpenImageR_augment_array_list(SEXP xSEXP, SEXP flip_modeSEXP, SEXP crop_heightSEXP, SEXP crop_widthSEXP, SEXP resiz_widthSEXP, SEXP resiz_heightSEXP, SEXP resiz_methodSEXP, SEXP shift_rowsSEXP, SEXP shift_colsSEXP, SEXP rotate_angleSEXP, SEXP rotate_methodSEXP, SEXP zca_compsSEXP, SEXP zca_epsilonSEXP, SEXP image_threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type flip_mode(flip_modeSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type crop_height(crop_heightSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type crop_width(crop_widthSEXP);
    Rcpp::traits::input_parameter< double >::type resiz_width(resiz_widthSEXP);
    Rcpp::traits::input_parameter< double >::type resiz_height(resiz_heightSEXP);
    Rcpp::traits::input_parameter< std::string >::type resiz_method(resiz_methodSEXP);
    Rcpp::traits::input_parameter< double >::type shift_rows(shift_rowsSEXP);
    Rcpp::traits::input_parameter< double >::type shift_cols(shift_colsSEXP);
    Rcpp::traits::input_parameter< double >::type rotate_angle(rotate_angleSEXP);
    Rcpp::traits::input_parameter< std::string >::type rotate_method(rotate_methodSEXP);
    Rcpp::traits::input_parameter< int >::type zca_comps(zca_compsSEXP);
    Rcpp::traits::input_parameter< double >::type zca_epsilon(zca_epsilonSEXP);
    Rcpp::traits::input_parameter< double >::type image_thresh(image_threshSEXP);
    rcpp_result_gen = Rcpp::wrap(augment_array_list(x, flip_mode, crop_height, crop_width, resiz_width, resiz_height, resiz_method, shift_rows, shift_cols, rotate_angle, rotate_method, zca_comps, zca_epsilon, image_thresh));
    return rcpp_result_gen;
END_RCPP
}
// MinMaxArray
Rcpp::List MinMaxArray(arma::cube x);
RcppExport SEXP OpenImageR_MinMaxArray(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(MinMaxArray(x));
    return rcpp_result_gen;
END_RCPP
}
// MinMaxMatrix
Rcpp::List MinMaxMatrix(arma::mat x);
RcppExport SEXP OpenImageR_MinMaxMatrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(MinMaxMatrix(x));
    return rcpp_result_gen;
END_RCPP
}
