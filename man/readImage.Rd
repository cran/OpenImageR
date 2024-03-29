% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/read_image.R
\name{readImage}
\alias{readImage}
\title{this function reads various types of images}
\usage{
readImage(path, ...)
}
\arguments{
\item{path}{a character string specifying the path to the saved image}

\item{...}{further arguments for the readPNG, readJPEG and readTIFF functions}
}
\value{
the image in a matrix or array form
}
\description{
Reads images of type .png, .jpeg, .jpg, .tiff
}
\details{
This function takes as input a string-path and returns the image in a matrix or array form. Supported types of images are .png, .jpeg, .jpg, .tiff.
Extension types similar to .tiff such as .tif, .TIFF, .TIF are also supported
}
\examples{

path = system.file("tmp_images", "1.png", package = "OpenImageR")

image = readImage(path)

}
