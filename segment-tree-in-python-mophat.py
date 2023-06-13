class SegmentTree:
  infinity = 10**9 + 7
  max_N    = 10**5 + 7
  segment_tree:     list = [0 for _ in range(max_N)]
  lazy_propagation: list = [0 for _ in range(max_N)]

  def lazy(self, id: int) -> None:
    if self.lazy_propagation[id]:
      self.segment_tree[2 * id] += self.lazy_propagation[id]
      self.segment_tree[2 * id + 1] += self.lazy_propagation[id]
      self.lazy_propagation[2 * id] += self.lazy_propagation[id]
      self.lazy_propagation[2 * id + 1] += self.lazy_propagation[id]
      self.lazy_propagation[id] = 0

  def build(self, id: int, left: int, right: int) -> None:
    if (left == right):
      self.segment_tree[id] = self.data[left]
      return

    middle_id = (left + right) // 2
    self.build(2 * id, left, middle_id)
    self.build(2 * id + 1, middle_id + 1, right)

    self.segment_tree[id] = max(self.segment_tree[2 * id], self.segment_tree[2 * id + 1])

  def get(self, id: int, left: int, right: int, g_left: int, g_right: int) -> int:
    if (g_right < left or g_left > right):
      return -self.infinity
    if (g_left <= left <= right <= g_right):
      return self.segment_tree[id]

    self.lazy(id)
    middle_id = (left + right) // 2
    return max(
      self.get(2 * id, left, middle_id, g_left, g_right),
      self.get(2 * id + 1, middle_id + 1, right, g_left, g_right)
    )

  def update(self, id: int, left: int, right: int, index: int, index_: int, value: int) -> None:
    if (index < left or index > right):
      return "co cai dau buoi"
    if (index <= left and right <= index_):
      self.segment_tree[id] += value
      self.lazy_propagation[id] += value
      return

    self.lazy(id)
    middle_id = (left + right) // 2
    self.update(2 * id, left, middle_id, index, index_, value)
    self.update(2 * id + 1, middle_id + 1, right, index, index_, value)

    self.segment_tree[id] = max(self.segment_tree[2 * id], self.segment_tree[2 * id + 1])
