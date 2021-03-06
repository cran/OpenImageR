% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/open_image_rscript.R
\name{convolution}
\alias{convolution}
\title{convolution}
\usage{
convolution(image, kernel, mode = "same")
}
\arguments{
\item{image}{either a matrix, data frame or array}

\item{kernel}{a kernel in form of a matrix}

\item{mode}{the convolution mode (one of 'same', 'full')}
}
\value{
either a matrix or an array, depending on the input data
}
\description{
convolution
}
\details{
This function performs convolution using a kernel matrix. When mode 'same' the output object has the same dimensions with the input, whereas
when mode 'full' the rows and columns of the output object equals : ROWS = nrow(image) + nrow(kernel) - 1 and COLUMNS = ncol(image) + ncol(kernel) - 1
}
\examples{


# kernel
x = matrix(1, nrow = 4, ncol = 4) / 16   # uniform


# matrix
image_matrix = matrix(runif(100), 10, 10)

res = convolution(image_matrix, x, "same")


# array
image_array = array(runif(300), dim = c(10, 10, 3))

res = convolution(image_array, x, "same")

}
\author{
Lampros Mouselimis
}
