#include "libavfilter/avfilter.h"

const AVFilter* pyav_filter_iterate(void **handle) {

#if LIBAVFILTER_VERSION_INT >= AV_VERSION_INT(7, 14, 100)
    return av_filter_iterate(handle);

#else
    const AVFilter *ptr;
    ptr = avfilter_next(*<AVFilter**>handle);
    *handle = ptr;
    return ptr;

#endif
}
