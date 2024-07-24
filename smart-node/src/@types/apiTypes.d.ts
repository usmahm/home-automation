export type SuccessResponseType<T extends object> = {
  success: true;
  message: string;
  statusCode: number;
  data?: T;
}

export type ErrorResponseType<T extends object> = {
  success: false;
  message: string;
  statusCode: number;
  data?: T;
}