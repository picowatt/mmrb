#pragma once

namespace mmrb {

	template <typename T>
	class RingBuffer {
	protected:
		size_t capacity;

	public:
		RingBuffer(size_t capacity);

		virtual ~RingBuffer() = default;

		bool write(const T& item);
		bool write(const void* data, size_t size);
		bool read(T& item);
		bool read(void* out, size_t size);
		bool peek(T& item) const;
		bool empty() const;
		bool full() const;
		bool clear();
	};
}