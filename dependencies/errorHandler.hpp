class errorHandler {
private:

public:
  errorHandler () {}

  std::string oneDimensionalArrayGeneratorZeroError = "Unable to handle length as zero in template <class Type> void oneDimensionalArrayGenerator (oneDimensionalArrayType<Type> ODAObject, limits<Type> limitsObject);";
  std::string oneDimensionalArrayGeneratorNegativeError = "Unable to handle negative length in template <class Type> void oneDimensionalArrayGenerator (oneDimensionalArrayType<Type> ODAObject, limits<Type> limitsObject);";

  std::string matrixGeneratorZeroError = "Unable to handle line or column as zero in template <class Type> void matrixGenerator (matrixType<Type> MTObject, limits<Type> limitsObject);"
  std::string matrixGeneratorNegativeError = "Unable to handle negative line or column in template <class Type> void matrixGenerator (matrixType<Type> MTObject, limits<Type> limitsObject);";

  std::string readOneDimensionalArrayZeroError = "Unable to handle length as zero in template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string readOneDimensionalArrayNegativeError = "Unable to handle negative length in template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string putsOneDimensionalArrayZeroError = "Unable to handle length as zero template <class Type> void putsOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string putsOneDimensionalArrayNegativeError = "Unable to handle negative length template <class Type> void putsOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string readMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void readMatrix (matrixType<Type> MTObject);";
  std::string readMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void readMatrix (matrixType<Type> MTObject);";

  std::string putsMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void putsMatrix (matrixType<Type> MTObject);";
  std::string putsMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void putsMatrix (matrixType<Type> MTObject);";

  virtual ~errorHandler () {}
};
