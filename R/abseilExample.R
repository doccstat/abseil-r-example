#' @title Dummy string
#' @description Dummy string
#' @return No return value, called for plotting.
#' @export
#' @useDynLib statusReturn, .registration = TRUE
dummy_string <- function() {
  print(.C("dummyString", ""))
}
