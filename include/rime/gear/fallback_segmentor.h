//
// Copyleft RIME Developers
// License: GPLv3
//
// 2011-06-20 GONG Chen <chen.sst@gmail.com>
//
#ifndef RIME_FALLBACK_SEGMENTOR_H_
#define RIME_FALLBACK_SEGMENTOR_H_

#include <string>
#include <rime/segmentor.h>

namespace rime {

class FallbackSegmentor : public Segmentor {
 public:
  explicit FallbackSegmentor(const Ticket& ticket);

  virtual bool Proceed(Segmentation* segmentation);
};

}  // namespace rime

#endif  // RIME_FALLBACK_SEGMENTOR_H_
