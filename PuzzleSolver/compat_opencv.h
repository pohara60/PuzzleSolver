/*
 * Support for OpenCV 3.x and 4.x compatibility.
 */

#ifndef COMPAT_OPENCV_H
#define COMPAT_OPENCV_H

#include "opencv2/core/version.hpp"

#if CV_VERSION_MAJOR < 4
#define COMPAT_CV_BGR2GRAY CV_BGR2GRAY
#define COMPAT_CV_MORPH_TYPE_OPEN CV_MOP_OPEN
#define COMPAT_CV_MORPH_TYPE_CLOSE CV_MOP_CLOSE
#else // 3.x
#define COMPAT_CV_BGR2GRAY cv::COLOR_BGR2GRAY
#define COMPAT_CV_MORPH_TYPE_OPEN cv::MorphTypes::MORPH_OPEN
#define COMPAT_CV_MORPH_TYPE_CLOSE cv::MorphTypes::MORPH_CLOSE
#endif

#if CV_VERSION_MAJOR < 4
#define COMPAT_CV_TERM_CRITERIA_EPS CV_TERMCRIT_EPS
#define COMPAT_CV_TERM_CRITERIA_MAX_ITER  CV_TERMCRIT_ITER
#else
#define COMPAT_CV_TERM_CRITERIA_EPS cv::TermCriteria::EPS
#define COMPAT_CV_TERM_CRITERIA_MAX_ITER  cv::TermCriteria::MAX_ITER
#endif

#endif /* COMPAT_OPENCV_H */
