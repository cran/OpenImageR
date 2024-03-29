% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/open_image_rscript.R
\name{dilationErosion}
\alias{dilationErosion}
\title{Dilation or Erosion of an image}
\usage{
dilationErosion(image, Filter, method = "dilation", threads = 1)
}
\arguments{
\item{image}{a matrix, data frame or 3-dimensional array where the third dimension is equal to 3}

\item{Filter}{a vector specifying the dimensions of the kernel, which will be used to perform either dilation or erosion, such as c(3,3)}

\item{method}{one of 'dilation', 'erosion'}

\item{threads}{number of cores to run in parallel ( > 1 should be used if image high dimensional )}
}
\value{
a matrix or 3-dimensional array where the third dimension is equal to 3
}
\description{
this function performs dilation or erosion to a 2- or 3- dimensional image
}
\details{
This function utilizes a kernel to perform dilation or erosion. The first value of the vector indicates the number of rows of the kernel, whereas
the second value indicates the number of columns.
}
\examples{

path = system.file("tmp_images", "1.png", package = "OpenImageR")

image = readImage(path)

res_dilate = dilationErosion(image, Filter = c(3,3), method = 'dilation')

res_erode = dilationErosion(image, Filter = c(5,5), method = 'erosion')

}
