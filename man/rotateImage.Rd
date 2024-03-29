% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/open_image_rscript.R
\name{rotateImage}
\alias{rotateImage}
\title{Rotate an image using the 'nearest' or 'bilinear' method}
\usage{
rotateImage(image, angle, method = "nearest", mode = "same", threads = 1)
}
\arguments{
\item{image}{matrix, data frame or 3-dimensional array where the third dimension is equal to 3}

\item{angle}{specifies the number of degrees}

\item{method}{a string specifying the interpolation method when rotating an image ( 'nearest', 'bilinear' )}

\item{mode}{one of 'full', 'same' (same indicates that the ouput image will have the same dimensions with initial image)}

\item{threads}{the number of cores to run in parallel}
}
\value{
depending on the input, either a matrix or an array
}
\description{
Rotate an image by angle using the 'nearest' or 'bilinear' method
}
\details{
This function rotates an image by a user-specified angle
}
\examples{

path = system.file("tmp_images", "2.jpg", package = "OpenImageR")

image = readImage(path)

r = rotateImage(image, 75, threads = 1)

}
