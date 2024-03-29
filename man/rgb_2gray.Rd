% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/open_image_rscript.R
\name{rgb_2gray}
\alias{rgb_2gray}
\title{convert an RGB image to Gray}
\usage{
rgb_2gray(RGB_image)
}
\arguments{
\item{RGB_image}{a 3-dimensional array where the third dimension is equal to 3}
}
\value{
a matrix
}
\description{
convert an RGB image to Gray
}
\details{
This function converts an RGB image to gray
}
\examples{

path = system.file("tmp_images", "1.png", package = "OpenImageR")

image = readImage(path)

gray = rgb_2gray(image)

}
\author{
Lampros Mouselimis
}
